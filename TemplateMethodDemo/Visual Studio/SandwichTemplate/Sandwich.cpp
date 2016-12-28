//////////////////////////////////////////////////////////////////////////////////
// Sandwich.h -		Abstract class for making Sandwiches. Contains hooks and	//
//					template methods along with const methods.					//
// Version :		1.0															//
// ---------------------------------------------------------------------------- //
// copyright © Venkata Chekuri, 2015											//
// All rights granted provided that this notice is retained.					//
// ---------------------------------------------------------------------------- //
// Language:		Visual C++, Visual Studio 2015								//
// Platform:		MSI GE62 2QD, Core-i7, Windows 10							//
// Application:		TemplateMethodDemo											//
// Author:			Venkata Chekuri												//
//					vbchekur@syr.edu											//
//////////////////////////////////////////////////////////////////////////////////

#include "Sandwich.h"

/**
  * Method to Cut the Bread.
  *
  * I have chosen the method to be constant since 
  * I don't want the Sandwich Makers to override
  * this method.
  */
const void Sandwich::cutBread() {
	std::cout << "\n The bead has been cut";
}

/**
  * Method to Wrap the Sandwich.
  *
  * I have chosen the method to be constant since
  * I don't want the Sandwich Makers to override
  * this method.
  */
const void Sandwich::wrapSandwich() {
	std::cout << "\n Wrapping the sandwich";
}

/**
  * Method to Make Sandwich.
  *
  * I have chosen the method to be constant since 
  * I don't want the Sandwich Makers to override
  * this method.
  */
const void Sandwich::makeSandwich() {
	cutBread();

	if (customerWantsMeat()) {
		addMeat();
	}

	if (customerWantsCheese()) {
		addCheese();
	}

	if (customerWantsVegetables()) {
		addVegetables();
	}

	if (customerWantsCondiments()) {
		addCondiments();
	}

	wrapSandwich();
}

#ifdef TEST_SANDWICH

// Without main method visual studio thorws errors
// during build. Silly issue with VS 2015.
int main() {
	// do Nothing
}
#endif // TEST_SANDWICH