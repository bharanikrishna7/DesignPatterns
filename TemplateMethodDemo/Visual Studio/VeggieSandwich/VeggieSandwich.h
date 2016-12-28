//////////////////////////////////////////////////////////////////////////////////
// VeggieSandwich.h -	Class for making Veggie Sandwiches. It is derived from	//
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

/*
* INTRODUCTION:
* -------------
* This class is derived from abstract class Sandwich (Template for all the sandwiches).
* The function of this class is to make Veggie Sandwiches. Since this class is derived
* from an abstract class therefore we are forced to implement/override all the pure vi-
* rtual methods.
*
* Since in Veggie Sandwiches we are not using Meat or Cheese therefore we will override
* hooks to prevent the addMeat and addCheese methods to be called in makeSandwich cons-
* -tant method.
*
* REQUIRED FILES:
* ---------------
* Sandwich.h, Sandwich.cpp, VeggieSandwich.h
*
* MAINTENANCE HISTORY:
* --------------------
* ver 1.0 : 10/25/2016
*	- first release
*/

#ifndef VEGGIE_SANDWICH_H
#define VEGGIE_SANDWICH_H

#include <vector>
#include <string>
#include "../SandwichTemplate/Sandwich.h"

/**
  * Class to make Veggie Sandwich. This class is
  * is derived from Sandwich Class.
  * 
  * ASSUMPTION:
  * -----------
  * Veggie Sandwich will not contain any kind of 
  * Meat or Cheese.
  */
class VeggieSandwich : public Sandwich {
	std::vector<std::string> veggiesUsed = { "Lettuce", "Tomatoes", "Onions", "Sweet Peppers" };
	std::vector<std::string> condimentsUsed = { "Oil", "Vinegar" };

	/* Override Hooks */
	// As veggie sandwich doesnot contain any meat, we change the hook to false.
	bool customerWantsMeat() { return false; }
	// As veggie sandwich doesnot contain any cheese, we change the hook to false.
	bool customerWantsCheese() { return false; }

	/**
	* ## OVERRIDE ##
	* Since it is pure virual method we still have to declare it.
	*/
	void addMeat() {
		// Do Nothing
	}

	/**
	* ## OVERRIDE ##
	* Since it is pure virual method we still have to declare it.
	*/
	void addCheese() {
		// Do Nothing
	}

	/**
	* ## OVERRIDE ##
	* Method to Add Vegetables to the Sandwich.
	*/
	void addVegetables() {
		std::cout << "\n Adding Vegetables : ";
		bool first = true;
		for (std::string veggies : veggiesUsed) {
			if (!first)
				std::cout << ", ";
			else
				first = false;
			std::cout << veggies;
		}
	}

	/**
	* ## OVERRIDE ##
	* Method to Add Condiments to the Sandwich.
	*/
	void addCondiments() {
		std::cout << "\n Adding Condiments : ";
		bool first = true;
		for (std::string condiment : condimentsUsed) {
			if (!first)
				std::cout << ", ";
			else
				first = false;
			std::cout << condiment;
		}
	}
};

#endif // !VEGGIE_SANDWICH_H
