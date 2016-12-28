//////////////////////////////////////////////////////////////////////////////////
// SandwichMaker.cpp -	Class to Demonstrate making Sandwiches	using derived   //
//						classes (VeggieSandwich, ItalianSandwich)				//
// Version :			1.0												        //
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

#include "SandwichMaker.h"

/**
  * Method to make an Italian Sandwich.
  *
  * This method uses ItalianSandwich class.
  */
void SandwichMaker::makeItalianSandwich() {
	Sandwich * italian = new ItalianSandwich();
	italian->makeSandwich();
	std::cout << "\n";
}

/**
  * Method to make a Veggie Sandwich.
  *
  * This method uses VeggieSandwich class.
  */
void SandwichMaker::makeVeggieSandwich() {
	Sandwich * veggie = new VeggieSandwich();
	veggie->makeSandwich();
	std::cout << "\n";
}

#ifdef TEST_SANDWICH_MAKER

/* Including Utilities for Formatting Output on Console. */
#include "../Utilities/Utilities.h"
using StringHelper = Utilities::StringHelper;

/**
  * Method to test the SandwichMaker Class.
  */
int main() {
	StringHelper::Title("Testing Sandwiches made using Template Method Pattern", '=');
	
	SandwichMaker swm;
	StringHelper::Title("Make Italian Sandwich");
	swm.makeItalianSandwich();

	StringHelper::Title("Make Vegetable Sandwich");
	swm.makeVeggieSandwich();
	std::cout << "\n ";
}
#endif // TEST_SANDWICH_MAKER
