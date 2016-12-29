//////////////////////////////////////////////////////////////////////////////////
// Screen.cpp -		Class to emulate Screen in a Home Theater System.			//
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

#include "Screen.h"

Screen::Screen() {
	setState(false);
}

#ifdef TEST_SCREEN
int main() {
	std::cout << "\n Testing Screen Class";
	std::cout << "\n ====================";

	Screen s;

	std::cout << "\n Initial State";
	s.showState();
	std::cout << "\n";

	std::cout << "\n Turn On Device";
	s.setState(true);
	s.showState();
	std::cout << "\n";

	std::cout << "\n Turn Off Device";
	s.setState(false);
	s.showState();
	std::cout << "\n";

	std::cout << "\n\n ";
	system("pause");
}

#endif // TEST_SCREEN
