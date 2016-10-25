//////////////////////////////////////////////////////////////////////////////////
// SandwichMaker.h -	Class to Demonstrate making Sandwiches	using derived   //
//						classes (VeggieSandwich, ItalianSandwich)				//
// Version :			1.0														//
// ---------------------------------------------------------------------------- //
// copyright © Venkata Chekuri, 2015											//
// All rights granted provided that this notice is retained.					//
// ---------------------------------------------------------------------------- //
// Language:			Visual C++, Visual Studio 2015							//
// Platform:			MSI GE62 2QD, Core-i7, Windows 10						//
// Application:			TemplateMethodDemo										//
// Author:				Venkata Chekuri											//
//						vbchekur@syr.edu										//
//////////////////////////////////////////////////////////////////////////////////

/*
 * INTRODUCTION:
 * -------------
 * This Class will be used for making Sandwiches. It will be making sandwiches using
 * the derived classes VeggieSandwich and ItalianSandwich.
 *
 * This Class is for Demonstration Purpose.
 *
 * REQUIRED FILES:
 * ---------------
 *  Sandwich.h, Sandwich.cpp, VeggieSandwich.h, ItalianSandwich.h, SandwichMaker.h, SandwichMaker.cpp
 *
 * MAINTENANCE HISTORY:
 * --------------------
 * ver 1.0 : 10/25/2016
 *	- first release
 */

#ifndef SANDWICH_MAKER_H
#define SANDWICH_MAKER_H

#include <iostream>
#include "../VeggieSandwich/VeggieSandwich.h"
#include "../ItalianSandwich/ItalianSandwich.h"

/**
  * Class to make Italian and Veggie Sandwiches.
  * 
  * This class will be using the derived classes -
  * ItalianSandwich and VeggieSandwich to make sandwiches.
  */
class SandwichMaker {
public:
	void makeItalianSandwich();
	void makeVeggieSandwich();
};

#endif // !SANDWICH_MAKER_H
