//////////////////////////////////////////////////////////////////////////////////
// Amplifier.cpp -	Class to emulate Amplifier in a Home Theater System.		//
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

#include "Amplifier.h"

Amplifier::Amplifier() {
	setState(false);
}

#ifdef TEST_AMPLIFIER
int main() {
	std::cout << "\n Testing Amplifier Class";
	std::cout << "\n =======================";

	Amplifier a;

	std::cout << "\n Initial State";
	a.showState();
	std::cout << "\n";

	std::cout << "\n Turn On Device";
	a.setState(true);
	a.showState();
	std::cout << "\n";

	std::cout << "\n Turn Off Device";
	a.setState(false);
	a.showState();
	std::cout << "\n";

	std::cout << "\n\n ";
	system("pause");
}
#endif // TEST_AMPLIFIER
