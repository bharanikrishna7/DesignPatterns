//////////////////////////////////////////////////////////////////////////////
// Utilities.h - small, generally usefule, helper classes					//
// Version :	  1.0                                                       //
// Language:      Visual C++, Visual Studio 2015							//
// Platform:      MSI GE62 2QD, Core-i7, Windows 10							//
// Application:   FacadeDemo												//
// Author:		  Venkata Chekuri											//
//                vbchekur@syr.edu											//
//////////////////////////////////////////////////////////////////////////////

/*
 * CREDITS:
 * --------
 * Special thanks to Prof. Jim Fawcett (Syracuse University) for introducing me
 * to use the Utilities Class Model and providing a starter code. This package
 * has saved me lot of time and effort.
 */

/*
 * INTRODUCTION:
 * -------------
 * This package provides classes StringHelper and Converter and a global
 * function putline().  This class will be extended continuously for 
 * awhile to provide convenience functions for general C++ applications.
 *
 * REQUIRED FILES:
 * ---------------
 * Utilities.h, Utilities.cpp
 *
 * MAINTENANCE HISTORY:
 * --------------------
 * ver 1.0 : 8 February 16
 * - first release
 */

#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include <algorithm>  
#include <cctype>
#include <locale>

namespace Utilities
{
  class StringHelper
  {
  public:
    static std::vector<std::string> split(const std::string& src);
    static void Title(const std::string& src, char underline = '-');
    static void title(const std::string& src);
	static std::string ltrim(std::string &s);
	static std::string rtrim(std::string &s);
	static std::string lrtrim(std::string &s);
  };

  void putline();

  template <typename T>
  class Converter
  {
  public:
    static std::string toString(const T& t);
    static T toValue(const std::string& src);
  };

  template <typename T>
  std::string Converter<T>::toString(const T& t)
  {
    std::ostringstream out;
    out << t;
    return out.str();
  }

  template<typename T>
  T Converter<T>::toValue(const std::string& src)
  {
    std::istringstream in(src);
    T t;
    in >> t;
    return t;
  }
}
#endif
