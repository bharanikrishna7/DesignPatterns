//////////////////////////////////////////////////////////////////////////////////////////////////
// ItalianSandwich.cpp -	Class for making Itailan Sandwiches. It is derived from		//
//				abstract class Sandwich (Template).				//
// Version :			1.0								//
// -------------------------------------------------------------------------------------------- //
// copyright © Venkata Chekuri, 2015								//
// All rights granted provided that this notice is retained.					//
// -------------------------------------------------------------------------------------------- //
// Language:				Visual C++, Visual Studio 2015				//
// Platform:				MSI GE62 2QD, Core-i7, Windows 10			//
// Application:				TemplateMethodDemo					//
// Author:				Venkata Chekuri						//
//					vbchekur@syr.edu					//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include "ItalianSandwich.h"

#ifdef TEST_ITALIAN

/**
  * Test Italian Sandwich Class
  */
int main() {
	Sandwich * itSW = new ItalianSandwich();
	itSW->makeSandwich();
	std::cout << "\n\n ";
}

#endif // TEST_ITALIAN
