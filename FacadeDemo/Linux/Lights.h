//////////////////////////////////////////////////////////////////////////////////
// Lights.h -		Class to emulate Lights in a Home Theater System.			//
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

/*
* INTRODUCTION
* ------------
* This class is derived from DevicesTemplate Class. The function of this class is
* to emulate the Lights in an Actual Home Theater System.
*
* No extra Methods were Required for this Class.
*
* REQUIRED FILES
* --------------
* DevicesTemplate.h, DevicesTemplate.cpp, Lights.h, Lights.cpp
*
* MAINTENANCE HISTORY
* -------------------
* version 1.0 : 12/29/2016
*	- First Release
*
*/

#ifndef LIGHTS_H
#define LIGHTS_H

#include "DevicesTemplate.h"

class Lights : public DevicesTemplate {
public:
	Lights();
};

#endif // !LIGHTS_H
