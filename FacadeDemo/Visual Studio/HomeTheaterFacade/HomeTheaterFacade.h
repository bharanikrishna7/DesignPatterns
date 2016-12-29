//////////////////////////////////////////////////////////////////////////////////
// HomeTheaterFacade.h -	Class to emulate A Remote to Control entire Home	//
//							Theater System.										//
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
* This class is the Facade to Control entire Home Theater. The function of this 
* class is to provide a beautiful interface for the end-user so that he/she need
* not worry about all the other devices and their interfaces.
*
* REQUIRED FILES
* --------------
* DevicesTemplate.h, DevicesTemplate.cpp, DvdPlayer.h, DvdPlayer.cpp, Amplifier.h, Amplifier.cpp
* Lights.h, Lights.cpp, Screen.h, Screen.cpp, HomeTheaterFacade.h, HomeTheaterFacade.cpp
*
* MAINTENANCE HISTORY
* -------------------
* version 1.0 : 12/29/2016
*	- First Release
*
*/

#ifndef HOME_THEATER_FACEDE_H
#define HOME_THEATER_FACEDE_H

#include "../Lights/Lights.h"
#include "../Screen/Screen.h"
#include "../Amplifier/Amplifier.h"
#include "../DvdPlayer/DvdPlayer.h"
#include "../DevicesTemplate/DevicesTemplate.h"

class HomeTheaterFacade {
private:
	Lights l;
	Screen s;
	Amplifier a;
	DvdPlayer * d;
public:
	HomeTheaterFacade(std::string _movie);
	void PowerOn();
	void ChangeMovie(std::string _movie);
	void Play();
	void Pause();
	void Stop();
	void PowerOff();
	~HomeTheaterFacade();
	void ShowInfo();
};

#endif //HOME_THEATER_FACEDE_H