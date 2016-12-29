//////////////////////////////////////////////////////////////////////////////////
// HomeTheaterFacade.cpp -	Class to emulate A Remote to Control entire Home	//
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

#include "HomeTheaterFacade.h"

HomeTheaterFacade::HomeTheaterFacade(std::string _movie) {
	l.setState(true);
	a.setState(false);
	s.setState(false);
	d = new DvdPlayer(_movie);
	d->Stop();
}

void HomeTheaterFacade::PowerOn() {
	l.setState(false);
	a.setState(true);
	s.setState(true);
	d->Play();
}

void HomeTheaterFacade::ChangeMovie(std::string _movie) {
	d->ChangeMovie(_movie);
}

void HomeTheaterFacade::Play() {
	d->Play();
}

void HomeTheaterFacade::Pause() {
	d->Pause();
	l.setState(false);
}

void HomeTheaterFacade::Stop() {
	d->Stop();
	l.setState(false);
}

void HomeTheaterFacade::PowerOff() {
	l.setState(true);
	a.setState(false);
	s.setState(false);
	d->~DvdPlayer();
}

HomeTheaterFacade::~HomeTheaterFacade() {
	PowerOff();
	delete d;
}

void HomeTheaterFacade::ShowInfo() {
	std::cout << "\n Devices Info -";
	std::cout << "\n --------------";
	std::cout << "\n Lights \t- "; 
	l.showState(false);
	std::cout << "\n Screen \t- ";
	s.showState(false);
	std::cout << "\n Amplifier \t- ";
	a.showState(false);
	d->PlayerInfo();
}

int main() {
	std::cout << "\n Testing Home Theater Facade";
	std::cout << "\n ===========================";

	HomeTheaterFacade * h = new HomeTheaterFacade("Star Wars");
	h->ShowInfo();

	std::cout << "\n\n # Turn on Home Theater";
	std::cout << "\n +++++++++++++++++++++++";
	h->PowerOn();
	h->ShowInfo();

	std::cout << "\n\n # Pause the Movie";
	std::cout << "\n ++++++++++++++++++";
	h->Pause();
	h->ShowInfo();

	std::cout << "\n\n # Play/Resume the Movie";
	std::cout << "\n ++++++++++++++++++++++++";
	h->Play();
	h->ShowInfo();

	std::cout << "\n\n # Turn off the Home Theater";
	std::cout << "\n ++++++++++++++++++++++++++++";
	h->PowerOff();
	h->ShowInfo();

	delete h;

	std::cout << "\n\n\n ";
	system("pause");
}