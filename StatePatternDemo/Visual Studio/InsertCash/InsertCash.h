//////////////////////////////////////////////////////////////////////////////////
// InsertCash.h - Concrete State for when the user is Inserting Cash into the	//
//				  Vending Machine.												//
// Version :1.0																	//
// ---------------------------------------------------------------------------- //
// copyright  Venkata Chekuri, 2016												//
// All rights granted provided that this notice is retained.					//
// ---------------------------------------------------------------------------- //
// Language:	Visual C++, Visual Studio 2015									//
// Platform:	MSI GE62 2QD, Core-i7, Windows 10								//
// Application:	StatePatternDemo												//
// Author:		Venkata Chekuri													//
//				vbchekur@syr.edu												//
//////////////////////////////////////////////////////////////////////////////////

/*
* INTRODUCTION
* ------------
* This Class Represents the Concrete State when the User is Inserting the Money or
* has Inserted the Money. It is a Derived class of VendingMachineState and in this
* class we will be overriding "InsertCashState" function.
*
* REQUIRED FILES
* --------------
* VendingMachineState.h, InsertCash.h
*
* MAINTENANCE HISTORY
* -------------------
* version 1.0 : 12/30/2016
* - First Release
*
*/

#ifndef INSERT_CASH_H
#define INSERT_CASH_H

#include "../VendingMachineState/VendingMachineState.h"

class InsertCash : public VendingMachineState {
public:
	InsertCash() {
		// Do Nothing
	};

	void InsertCashState() {
		std::cout << "Insert Cash State";
	};
};
#endif // !INSERT_CASH_H