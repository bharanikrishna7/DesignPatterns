//////////////////////////////////////////////////////////////////////////////////
// Utilities.cpp - small, generally usefule, helper classes			//
// Version :	  	1.0							//
// Language:      	Visual C++, Visual Studio 2015				//
// Platform:      	MSI GE62 2QD, Core-i7, Windows 10			//
// Application:   	TemplateMethodeDemo					//
// Author:		Venkata Chekuri						//
//                	vbchekur@syr.edu					//
//////////////////////////////////////////////////////////////////////////////////

/*
* CREDITS:
* --------
* Special thanks to Prof. Jim Fawcett (Syracuse University) for introducing me
* to use the Utilities Class Model and providing a starter code. This package
* has saved me lot of time and effort.
*/

#include <regex>
#include <string>
#include <locale>
#include <cctype>
#include <iostream>
#include "Utilities.h"

using namespace Utilities;

/**
  * Generate title format for string
  */
void StringHelper::title(const std::string& src)
{
  std::cout << "\n  " << src;
  std::cout << "\n " << std::string(src.size() + 2, '-');
}

/**
  * Generate Title format for string
  */
void StringHelper::Title(const std::string& src, char underline)
{
  std::cout << "\n  " << src;
  std::cout << "\n " << std::string(src.size() + 2, underline);
}

/**
  * Split a string at ',' and return these sub-strings as a vector
  */
std::vector<std::string> StringHelper::split(const std::string& src)
{
  std::vector<std::string> accum;
  std::string temp;
  size_t index = 0;
  do
  {
    while ((isspace(src[index]) || src[index] == ',') && src[index] != '\n')
    {
      ++index;
      if (temp.size() > 0)
      {
        accum.push_back(temp);
        temp.clear();
      }
    }
    if(src[index] != '\0')
      temp += src[index];
  } while (index++ < src.size());
  if(temp.size() > 0)
    accum.push_back(temp);
  return accum;
}

/**
  * Print newline to console
  */
void Utilities::putline()
{
  std::cout << "\n";
}

#ifdef TEST_UTILITIES
/**
  * TEST STUB
  */
int main()
{
  Title("Testing Utilities Package");
  putline();

  title("test StringHelper::split(std::string)");

  std::string test = "a, \n, bc, de, efg, i, j k lm nopq rst";
  std::cout << "\n  test string = " << test;

  std::vector<std::string> result = StringHelper::split(test);

  std::cout << "\n";
  for (auto item : result)
  {
    if (item == "\n")
      std::cout << "\n  " << "newline";
    else
      std::cout << "\n  " << item;
  }
  std::cout << "\n";

  title("test std::string Converter<T>::toString(T)");

  std::string conv1 = Converter<double>::toString(3.1415927);
  std::string conv2 = Converter<int>::toString(73);
  std::string conv3 = Converter<std::string>::toString("a_test_string plus more");

  std::cout << "\n  Converting from values to strings: ";
  std::cout << conv1 << ", " << conv2 << ", " << conv3;
  putline();

  title("test T Converter<T>::toValue(std::string)");

  std::cout << "\n  Converting from strings to values: ";
  std::cout << Converter<double>::toValue(conv1) << ", ";
  std::cout << Converter<int>::toValue(conv2) << ", ";
  std::cout << Converter<std::string>::toValue(conv3);

  std::cout << "\n\n";
  return 0;
}
#endif
