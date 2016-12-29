//////////////////////////////////////////////////////////////////////////////////
// DvdPlayer.h -	Class to emulate DVD Player in a Home Theater System.		//
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
* to emulate the Screen in an Actual Home Theater System.
*
*
* REQUIRED FILES
* --------------
* DevicesTemplate.h, DevicesTemplate.cpp, DvdPlayer.h, DvdPlayer.cpp
*
* MAINTENANCE HISTORY
* -------------------
* version 1.0 : 12/29/2016
*	- First Release
*
*/

#ifndef DVD_PLAYER_H
#define DVD_PLAYER_H

#include "DevicesTemplate.h"

#include <vector>
#include <string>

class DvdPlayer : public DevicesTemplate {
public:
	DvdPlayer(std::string _movie);
	~DvdPlayer();
	void Play();
	void Pause();
	void Stop();
	void MovieStatus();
	void ChangeMovie(std::string _movie);
	void PlayerInfo();
private:
	std::vector<std::string> States = { "Play", "Pause", "Stop" };
	std::string movie;
	int movie_state;
};

#endif // !DVD_PLAYER_H
