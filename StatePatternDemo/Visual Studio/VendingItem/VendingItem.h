//////////////////////////////////////////////////////////////////////////////////
// VendingItem.h - Concrete State for when the Vending Machine is Vending Item. //
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
* This Class Represents the Concrete State when the Vending Machine is Vending Item
* to the User. It is a Derived class of VendingMachineState and in this class we
* will be overriding "VendingItemState" function.
*
* REQUIRED FILES
* --------------
* VendingMachineState.h, VendingItem.h
*
* MAINTENANCE HISTORY
* -------------------
* version 1.0 : 12/30/2016
* - First Release
*
*/

#ifndef VENDING_ITEM_H
#define VENDING_ITEM_H

#include "../VendingMachineState/VendingMachineState.h"

class VendingItem : public VendingMachineState {
public:
	VendingItem() {
		// Do Nothing
	};

	void VendingItemState() {
		std::cout << "Vending Item State";
	};
};
#endif // !VENDING_ITEM_H
