//////////////////////////////////////////////////////////////////////////////////
// Lights.cpp -		Class to emulate Lights in a Home Theater System.			//
// Version :		1.0															//
// ---------------------------------------------------------------------------- //
// copyright © Venkata Chekuri, 2016											//
// All rights granted provided that this notice is retained.					//
// ---------------------------------------------------------------------------- //
// Language:			Visual C++, Visual Studio 2015							//
// Platform:			MSI GE62 2QD, Core-i7, Windows 10						//
// Application:			FacadeDemo												//
// Author:				Venkata Chekuri											//
//						vbchekur@syr.edu										//
//////////////////////////////////////////////////////////////////////////////////

#include "Lights.h"

Lights::Lights() {
	setState(false);
}

#ifdef TEST_LIGHTS
int main() {
	std::cout << "\n Testing Lights Class";
	std::cout << "\n ====================";

	Lights l;

	std::cout << "\n Initial State";
	l.showState();
	std::cout << "\n";

	std::cout << "\n Turn On Device";
	l.setState(true);
	l.showState();
	std::cout << "\n";

	std::cout << "\n Turn Off Device";
	l.setState(false);
	l.showState();
	std::cout << "\n";

	std::cout << "\n\n ";
	system("pause");
}
#endif // TEST_LIGHTS
