//////////////////////////////////////////////////////////////////////////////////
// DvdPlayer.cpp -	Class to emulate DVD Player in a Home Theater System.		//
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

#include "DvdPlayer.h"

DvdPlayer::DvdPlayer(std::string _movie) {
	setState(true);
	movie = _movie;
	movie_state = 0;
}

DvdPlayer::~DvdPlayer() {
	movie_state = 2;
	setState(false);
}

void DvdPlayer::ChangeMovie(std::string _movie) {
	movie = _movie;
	movie_state = 1;
}

void DvdPlayer::Play() {
	if (!showState())
		setState(true);
	movie_state = 0;
}

void DvdPlayer::Pause() {
	movie_state = 1;
}

void DvdPlayer::Stop() {
	movie_state = 2;
}

void DvdPlayer::MovieStatus() {
	if (movie_state == 0)
		std::cout << "\n Movie Status : Play";
	else if (movie_state == 1)
		std::cout << "\n Movie Status : Pause";
	else if (movie_state == 2)
		std::cout << "\n Movie Status : Stop";
	else
		std::cout << "\n Movie Status : Error";
}

void DvdPlayer::PlayerInfo() {
	std::cout << "\n Player Info -";
	std::cout << "\n -------------";
	showState();
	std::cout << "\n Movie : " << movie;
	MovieStatus();
}

#ifdef TEST_DVD_PLAYER
int main() {
	std::cout << "\n Testing DVD Player Class";
	std::cout << "\n ========================";

	DvdPlayer *d = new DvdPlayer("Star Wars");

	std::cout << "\n # Initial DVD Player Status";
	d->PlayerInfo();

	std::cout << "\n\n # Change Movie";
	d->ChangeMovie("LOTR");
	d->PlayerInfo();

	std::cout << "\n\n # Pause Movie";
	d->Pause();
	d->PlayerInfo();

	std::cout << "\n\n # Play Movie";
	d->Play();
	d->PlayerInfo();

	std::cout << "\n\n # Stop Movie";
	d->Stop();
	d->PlayerInfo();

	std::cout << "\n\n # Turn Off DVD Player";
	d->~DvdPlayer();
	d->PlayerInfo();

	delete d;

	std::cout << "\n\n\n ";
	system("pause");
}
#endif // TEST_DVD_PLAYER