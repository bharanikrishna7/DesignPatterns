//////////////////////////////////////////////////////////////////////////////////
// DeviceTemplate.cpp -	Template Class for All Devices Present in the Home 		//
//						Theater System.											//
// Version :			1.0														//
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
#include "DevicesTemplate.h"

void DevicesTemplate::setState(bool _state) {
	state = _state;
}

DevicesTemplate::DevicesTemplate() {
	state = false;
}

bool DevicesTemplate::showState(bool newline) {
	if (newline) {
		if (state)
			std::cout << "\n State : On";
		else
			std::cout << "\n State : Off";
	}
	else {
		if (state)
			std::cout << "On";
		else
			std::cout << "Off";
	}
	return state;
}

#ifdef TEST_DEVICES_TEMPLATE
int main() {
	std::cout << "\n Template Class For All Devices";
	std::cout << "\n ==============================\n\n ";
	system("pause");
}
#endif // TEST_DEVICES_TEMPLATE
