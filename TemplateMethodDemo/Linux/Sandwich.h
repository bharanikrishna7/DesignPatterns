//////////////////////////////////////////////////////////////////////////////////////////
// Sandwich.h -		Abstract class for making Sandwiches. Contains hooks and	//
//			template methods along with const methods.			//
// Version :		1.0								//
// ------------------------------------------------------------------------------------ //
// copyright © Venkata Chekuri, 2015							//
// All rights granted provided that this notice is retained.				//
// ------------------------------------------------------------------------------------ //
// Language:		Visual C++, Visual Studio 2015					//
// Platform:		MSI GE62 2QD, Core-i7, Windows 10				//
// Application:		TemplateMethodDemo						//
// Author:		Venkata Chekuri							//
//			vbchekur@syr.edu						//
//////////////////////////////////////////////////////////////////////////////////////////

/*
 * INTRODUCTION:
 * -------------
 * This class is a base class to make all the sandwiches (Italian, Veggie etc).
 * It contains some constant (non-overridable) methods, template (pure virtual)
 * methods and hooks.
 *
 * The template methods have to be implemented by derived classes while hooks
 * are optional.
 *
 * The purpose of hooks is to provide option for the derived methods to use or
 * not use some method calls in the constant methods (since they cannot be mod-
 * -ified by the derived classes.
 *
 * REQUIRED FILES:
 * ---------------
 * Sandwich.h, Sandwich.cpp
 *
 * MAINTENANCE HISTORY:
 * --------------------
 * ver 1.0 : 10/25/2016
 *	- first release
 */

#ifndef SANDWICH_H
#define SANDWICH_H

#include <iostream>

/**
  * Template class for making different kinds of Sandwiches.
  *
  * This class will force the derived class to implement the
  * pure virtual functions (mentioned in template methods).
  *
  * Hooks will provide options for the derived class to use
  * or skip executing something(s) in the constant method(s).
  */
class Sandwich {
protected:
	// Template Methods
	virtual void addMeat() = 0;
	virtual void addCheese() = 0;
	virtual void addVegetables() = 0;
	virtual void addCondiments() = 0;

	// Constant Methods
	void cutBread();
	void wrapSandwich();

	// Hooks
	bool customerWantsMeat() { return true; }
	bool customerWantsCheese() { return true; }
	bool customerWantsVegetables() { return true; }
	bool customerWantsCondiments() { return true; }
public:
	// Only this method will be accessible publicly
	void makeSandwich();
};

#endif // !SANDWICH_H
