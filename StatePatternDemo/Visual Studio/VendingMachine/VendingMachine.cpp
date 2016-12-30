//////////////////////////////////////////////////////////////////////////////////
// VendingMachine.cpp 	- Emulates State Based Vending Machine					//
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

#include "VendingMachine.h"

VendingMachine::VendingMachine() {
	// Initialized States
	noCash = new NoCash();
	insertCash = new InsertCash();
	vendingItem = new VendingItem();
	outOfOrder = new OutOfOrder();

	// Set initial money inserted value to 0
	moneyInserted = 0;
	// Set initial State to No Cash
	SetVendingMachineState(noCash);
}

void VendingMachine::SetVendingMachineState(VendingMachineState * _newState) {
	currentState = _newState;
}

void VendingMachine::InsertCashInMachine(int _money) {
	SetVendingMachineState(insertCash);
	moneyInserted = _money;
}

void VendingMachine::MachineOutOfOrder() {
	SetVendingMachineState(outOfOrder);
	std::cout << "\n Machine Out Of Order";
	if (moneyInserted > 0) {
		std::cout << "\n Returning Money : " << moneyInserted;
		moneyInserted = 0;
	}
}

void VendingMachine::VendItem(int _item) {
	SetVendingMachineState(vendingItem);
	ShowStateInfo();
	if (_item >= (int)items.size())
		std::cout << "\n Invalid Item";
	else if (itemQuantity[_item] == 0)
		std::cout << "\n Item out of Stock";
	else {
		if (itemValues[_item] > moneyInserted)
			std::cout << "\n Insufficient Funds";
		else
		{
			std::cout << "\n Vending Item : " << items[_item];
			moneyInserted = moneyInserted - itemValues[_item];
			std::cout << "\n Returning Money : $" << moneyInserted;
			SetVendingMachineState(noCash);
			moneyInserted = 0;
		}
	}
	ShowStateInfo();
}

void VendingMachine::ShowStateInfo() {
	std::cout << "\n State : ";
	currentState->NoCashState();
	currentState->InsertCashState();
	currentState->VendingItemState();
	currentState->OutOfOrderState();
}

void VendingMachine::ShowFunds() {
	std::cout << "\n Cash In Machine : $" << moneyInserted;
}

int main() {
	std::cout << "\n Testing Vending Machine Package";
	std::cout << "\n ===============================";

	VendingMachine * vm = new VendingMachine();
	std::cout << "\n Initial State";
	std::cout << "\n -------------";
	vm->ShowStateInfo();
	vm->ShowFunds();
	std::cout << "\n";

	std::cout << "\n Insert $10 cash into the Machine";
	std::cout << "\n --------------------------------";
	vm->InsertCashInMachine(10);
	vm->ShowStateInfo();
	vm->ShowFunds();
	std::cout << "\n";

	std::cout << "\n Vend Chips";
	std::cout << "\n ----------";
	vm->VendItem(0);
	std::cout << "\n";

	std::cout << "\n Vend Chips Again";
	std::cout << "\n ----------------";
	vm->ShowStateInfo();
	vm->ShowFunds();
	std::cout << "\n\n - Inserting $2 into Vending Machine";
	vm->InsertCashInMachine(2);
	vm->ShowStateInfo();
	vm->ShowFunds();
	std::cout << "\n ";
	vm->VendItem(0);
	std::cout << "\n\n ";	
}