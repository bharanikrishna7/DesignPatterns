//////////////////////////////////////////////////////////////////////////////////
// ItalianSandwich.h -	Class for making Itailan Sandwiches. It is derived from	//
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
 * The function of this class is to make Italian Sandwiches. Since this class is derived
 * from an abstract class therefore we are forced to implement/override all the pure vir-
 * tual methods.
 *
 * The hooks are not overridden since we are not using them in this class.
 *
 * REQUIRED FILES:
 * ---------------
 * Sandwich.h, Sandwich.cpp, ItailanSandwich.h
 *
 * MAINTENANCE HISTORY:
 * --------------------
 * ver 1.0 : 10/25/2016
 *	- first release
 */

#ifndef ITALIAN_SANDWICH_H
#define ITALIAN_SANDWICH_H

#include <vector>
#include <string>
#include "../SandwichTemplate/Sandwich.h"

/**
  * Class to make Italian Sandwich. This class
  * is derived from Sandwich class.
  */
class ItalianSandwich : public Sandwich {
	std::vector<std::string> meatUsed = { "Salami", "Pepperoni", "Ham" };
	std::vector<std::string> cheeseUsed = { "Provolone" };
	std::vector<std::string> veggiesUsed = { "Lettuce", "Tomatoes", "Onions", "Sweet Peppers" };
	std::vector<std::string> condimentsUsed = { "Oil", "Vinegar" };

	/** 
	  * ## OVERRIDE ##
	  * Method to Add Meat to the Sandwich.
	  */
	void addMeat() {
		std::cout << "\n Adding Meat : ";
		bool first = true;
		for (std::string meat : meatUsed) {
			if (!first)
				std::cout << ", ";
			else
				first = false;
			std::cout << meat;
		}
	}

	/**
	  * ## OVERRIDE ##
	  * Method to Add Cheese to the Sandwich.
	  */
	void addCheese() {
		std::cout << "\n Adding Cheese : ";
		bool first = true;
		for (std::string cheese : cheeseUsed) {
			if (!first)
				std::cout << ", ";
			else
				first = false;
			std::cout << cheese;
		}
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

#endif // !ITALIAN_SANDWICH_H