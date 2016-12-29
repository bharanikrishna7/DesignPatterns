INTRODUCTION:
-------------

This project demonstrated the usage of Facade Design Pattern. This project consists of following packages:  
- DevicesTemplate  
DevicesTemplate package provides a Template for all the devices ("classes") which will be used in the Home Theater System example. This class contains non-overridable methods only. 

- Amplifier  
This package contains "Amplifier" class which will emulate an Amplifier in a Home Theater System. This class is derived from template class "DevicesTemplate".

- Lights  
This package contains "Lights" class which will emulate Lights in a Home Theater System. This class is derived from template class "DevicesTemplate".

- Screen  
This package contains "Screen" class which will emulate Screen in a Home Theater System. This class is derived from template class "DevicesTemplate".

- DvdPlayer
This package contains "DvdPlayer" class which will emulate DVD Player in a Home Theater System. This class is derived from template class "DevicesTemplate".

- HomeTheaterFacade
This package is a Facade for the Home Theater System. It simulates a Remote to Control the Devices in the Home Theater. 

FACADE :
--------
Facade Design Pattern is a code architecture model which offers a simplified interface to the end-user. This model is very useful in the following situations:
- Provide a simlpified interface to complex underlying model.
- Provide restricted access to end-user (make other classes unavailable and just provide the interface of Facade to the end-user).

Related Patterns:  
 - Adapter Pattern  
 - Decorator Pattern

USAGE :
-------
- Visual Studio
Requires Visual Studio 2015. Simply Build and Execute the HomeTheaterFacade Package.

- Linux
Requires g++ 4.8 or above. Execute compile.sh to compile and then execute "FacadeHomeTheaterDemo.out" to run the demo code.