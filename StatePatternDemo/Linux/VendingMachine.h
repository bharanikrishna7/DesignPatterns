//////////////////////////////////////////////////////////////////////////////////
// VendingMachine.h 	- Emulates State Based Vending Machine			//
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
 * This Class Emulates State Based Vending Machine. For each action it leverages
 * feature/methods present in a specific state to attain it's objective.
 * - When the machine initially boots up it is in NoCash State.
 * - When the user inserts cash it is in Insert Cash State.
 * - Once the user inserted cash and he/she picks the item, machine will be in
 *   Vending Item State.
 * - After the Vending is done, the Machine will go into No Cash State again.
 * - If the Machine is out of order it'll be in Out Of Order State (not used in
 *   our program).
 *
 * REQUIRED FILES
 * --------------
 * VendingMachineState.h, VendingMachine.h, VendingMachine.cpp, NoCash.h,
 * InsertCash.h, OutOfOrder.h, VendingItem.h
 *
 * MAINTENANCE HISTORY
 * -------------------
 * version 1.0 : 12/30/2016
 * - First Release
 *
 */

#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

#include "States/NoCash.h"
#include "States/InsertCash.h"
#include "States/OutOfOrder.h"
#include "States/VendingItem.h"

#include "VendingMachineState.h"

#include <vector>
#include <string>

class VendingMachine {
private:
	// Different States which the Vending Machine can have.
	VendingMachineState * noCash;
	VendingMachineState * insertCash;
	VendingMachineState * vendingItem;
	VendingMachineState * outOfOrder;

	// Hold the Current State of the Vending Machine.
	VendingMachineState * currentState;
	// Items and Their Values present in the Vending Machine.
	std::vector<int> itemValues = { 1, 2, 2, 5, 2, 4, 3 };
	std::vector<int> itemQuantity = { 1, 1, 1, 1, 1, 1, 1 };
	std::vector<std::string> items = { "Chips", "Soda", "Diet Soda", "Toffees", "Water", "Cookies", "Snack" };
	int moneyInserted;

	void SetVendingMachineState(VendingMachineState * _newState);
public:
	VendingMachine();
	void InsertCashInMachine(int _money);
	void MachineOutOfOrder();
	void VendItem(int _item);
	void ShowStateInfo();
	void ShowFunds();
};
#endif // !VENDING_MACHINE_H
