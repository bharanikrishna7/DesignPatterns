//////////////////////////////////////////////////////////////////////////////////
// NoCash.h - Concrete States for when the Vending Machine is Idle.	 			//
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
* This Class Represents the Concrete State when the Vending Machine is in Idle State.
* It is a Derived class of VendingMachineState and in this class we will be overriding
* "NoCashState" function.
*
* REQUIRED FILES
* --------------
* VendingMachineState.h, NoCash.h
*
* MAINTENANCE HISTORY
* -------------------
* version 1.0 : 12/30/2016
* - First Release
*
*/

#ifndef NO_CASH_H
#define NO_CASH_H

#include "../VendingMachineState/VendingMachineState.h"

class NoCash : public VendingMachineState {
public:
	NoCash() {
		// Do Nothing
	};
private:
	void NoCashState() {
		std::cout << "No Cash State";
	};
};

#endif // !NO_CASH_H
