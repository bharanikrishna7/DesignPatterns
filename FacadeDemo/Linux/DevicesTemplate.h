//////////////////////////////////////////////////////////////////////////////////
// DeviceTemplate.h -	Template Class for All Devices Present in the Home 		//
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

/*
 * INTRODUCTION
 * ------------
 * This class is the base class for all the devices which will be used in the 
 * Home Theater System. 
 *
 * No Hooks or Pure Virtual Methods are present in this Template Class.
 *
 * REQUIRED FILES
 * --------------
 * DeviceTemplate.h, DeviceTemplate.cpp
 *
 * MAINTENANCE HISTORY
 * -------------------
 * version 1.0 : 12/29/2016
 *	- First Release
 *
 */

#ifndef DEVICES_TEMPLATE_H
#define DEVICES_TEMPLATE_H

#include <iostream>

class DevicesTemplate {
private:
	bool state;
public:
	void setState(bool _state);
	bool showState(bool newline = true);
	DevicesTemplate();
};

#endif // !DEVICES_TEMPLATE_H
