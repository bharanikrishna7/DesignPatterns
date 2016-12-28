//////////////////////////////////////////////////////////////////////////////////
// VeggieSandwich.cpp -	Class for making Veggie Sandwiches. It is derived from	//
//						abstract class Sandwich (Template).						//
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

#include "VeggieSandwich.h"

#ifdef TEST_VEGGIE

int main() {
	Sandwich * veggie = new VeggieSandwich();
	veggie->makeSandwich();
	std::cout << "\n\n ";
}

#endif // TEST_VEGGIE