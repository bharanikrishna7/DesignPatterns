INTRODUCTION:
-------------

This project demonstrated the usage of Template method Design Pattern. This project consists of following packages:  
- SandwichTemplate  
SandwichTemplate package provides an abstract class "Sandwich" which will be used as a template for all the other classes which make different kinds of sandwiches. This class contains non-overridable & pure virtual methods along with hooks. 

- ItalianSandwich  
This package contains "ItalianSandwich" class which will prepare Italian Sandwiches. This class is derived from abstract class "Sandwich".

- VeggieSandwich  
This package contains "VeggieSandwich" class which will prepare Veggie Sandwiches. This class is derived from abstract class "Sandwich".

- SandwichMaker  
This package contains "SandwichMaker" class whose function is to demonstrate that derived make sandwiches as expected.



TEMPLATE METHOD:
----------------
Template Method Design Pattern is a code architecture model in which multiple classes are derived from an abstract class, which is the template. This model is very useful in the situations where the methods of the derived classes are functionally similar but might slightly vary in implementation.  
Ex: A Barbeque Chicken Sandwich has slightly different ingredents from an Italian Sandwich, but both the sandwiches are prepared in the same way.

Characteristics of template method include:
 - Abstract Methods  
 The abstract methods are present in the template class. Being abstract forces the derived classes to implement/override these methods.

 - Hooks  
 Sometimes we have non-overridable (constant) methods in the Template Class. They make sure that the derived classes don't override them (very useful in some scenarios). But sometimes the derived classes don't need the non-overridable methods to execute few methods, in such cases we use hooks. The hooks are overridable in the derived classes as per requirement. (Please refer to the VegetableSandwich package for more details).  
Even though we use hooks to not use some of the methods, still we need to implement/override all the abstract methods.

Related Patterns:  
 - Factory Method Pattern  
 - Strategy Pattern  

USAGE :
-------
- Visual Studio
Requires Visual Studio 2015. Simply Build and Execute the HomeTheaterFacade Package.

- Linux
Requires g++ 4.8 or above. Execute compile.sh to compile and then execute "SandwichDemo.out" to run the demo code.