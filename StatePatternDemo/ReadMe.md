INTRODUCTION:
-------------

This project demonstrates the usage of State Design Pattern. This project consists of following packages:  
- VendingMachineState
VendingMachineState package provides a Template for all the States that we plan to add to the Vending Machine. This class contains Virtual Functions only since no state specific attributes are required in this Vending Machine. The Functions  
present in this class will be overridden by the associated Concrete States. 

- InsertCash
This class is a Concrete State which will represent the State when the user is inserting / has inserted the money. We will be overriding "InsertCashState" function in this class. 

- NoCash
This class is a Concrete State which will represent the State when the Vending Machine is Idle. We will be overriding "NoCashState" function in this class. 

- VendingItem
This class is a Concrete State which will represent the State when the Vending Machine is Vending an Item. We will be overriding "VendingItemState" function in this class. 

- OutOfOrder
This class is a Concrete State which will represent the State when the Vending Machine is Out Of Order. We will be overriding "OutOfOrderState" function in this class. (This Class has not been used in this project) 

- VendingMachine 
This package emulates State Based Vending Machine. For Each Action it Leverages Feature/Methods Present in a Specific State to Attain it's Objective. 


STATE DESIGN PATTERN:
---------------------
State Design Pattern is a Code Architecture Model Which Allows an Object to Behave Differently Depending on it's State at Runtime.  This can be a cleaner way for an object to change its behavior at runtime without resorting to large monolithic conditional statements and thus improve maintainability.    
Ex: A Siege Tank in Age of Empires Video Game in Move State can Move around in the Map but it can not do any Damage to Enemy Units. And in Siege State it cannot move but does good Damage per Hit to Emeny Units.

Related Patterns:
 - Strategy Pattern

USAGE :
-------
- Visual Studio
Requires Visual Studio 2015. Simply Build and Execute the HomeTheaterFacade Package.

- Linux
Requires g++ 4.8 or above. Execute compile.sh to compile and then execute "StateVendingMachineDemo.out" to run the demo code.