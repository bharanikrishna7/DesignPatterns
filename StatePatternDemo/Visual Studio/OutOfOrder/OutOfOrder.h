//////////////////////////////////////////////////////////////////////////////////
// OutOfOrder.h - Concrete States for when the Vending Machine is Out of Order 	//
// Version :1.0																	//
// ---------------------------------------------------------------------------- //
// copyright  Venkata Chekuri, 2016												//
// All rights granted provided that this notice is retained.					//
// ---------------------------------------------------------------------------- //
// Language:	Visual C++, Visual Studio 2015									//
// Platform:	MSI GE62 2QD, Core-i7, Windows 10								//
// Application:	StatePatternDemo												//
// Author:	Venkata Chekuri														//
//		vbchekur@syr.edu														//
//////////////////////////////////////////////////////////////////////////////////

/*
* INTRODUCTION
* ------------
* This Class Represents the Concrete State when the Vending Machine is Out Of Order.
* It is a Derived class of VendingMachineState and in this class we will be overriding
* "OutOfOrderState" function.
*
* REQUIRED FILES
* --------------
* VendingMachineState.h, OutOfOrder.h
*
* MAINTENANCE HISTORY
* -------------------
* version 1.0 : 12/30/2016
* - First Release
*
*/

#ifndef OUT_OF_ORDER_H
#define OUT_OF_ORDER_H

#include "../VendingMachineState/VendingMachineState.h"

class OutOfOrder : public VendingMachineState {
public:
	OutOfOrder() {
		// Do Nothing
	};

	void OutOfOrderState() {
		std::cout << "Machine is Out Of Order";
	};
};
#endif // !OUT_OF_ORDER_H
