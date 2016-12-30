//////////////////////////////////////////////////////////////////////////////////
// VendingMachineState.h - Template for Different States associated to the 	//
//			   Vending Machine.					//
// Version :1.0									//
// ---------------------------------------------------------------------------- //
// copyright  Venkata Chekuri, 2016						//
// All rights granted provided that this notice is retained.			//
// ---------------------------------------------------------------------------- //
// Language:	Visual C++, Visual Studio 2015					//
// Platform:	MSI GE62 2QD, Core-i7, Windows 10				//
// Application:	StatePatternDemo						//
// Author:	Venkata Chekuri							//
//		vbchekur@syr.edu						//
//////////////////////////////////////////////////////////////////////////////////

/*
 * INTRODUCTION
 * ------------
 * This class is the base class for all the States Associated with the Vending
 * Machine. It contains only functions and all of the functions are virtual
 * functions (This allows them  to be overridable). Each function is associated
 * with a specific state. The idea here is that for each derived state we will
 * override the associated function and achieve the desired functionality of the
 * state.
 *
 * The State Template Class Can hold other attributes too and not just functions,
 * but in our case no other attributes were required hence they were not included.
 *
 * REQUIRED FILES
 * --------------
 * VendingMachineState.h
 *
 * MAINTENANCE HISTORY
 * -------------------
 * version 1.0 : 12/30/2016
 * - First Release
 *
 */

#ifndef VENDING_MACHINE_STATE_H
#define VENDING_MACHINE_STATE_H

#include <iostream>

class VendingMachineState {
public:
	virtual void NoCashState() {};
	virtual void InsertCashState() {};
	virtual void VendingItemState() {};
	virtual void OutOfOrderState() {};
};
#endif // !VENDING_MACHINE_STATE_H
