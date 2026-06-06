#include "Hamburger.h"


void Hamburger::setXmappa(int xMappa){
	this->xMappa = xMappa;
}

void Hamburger::setYmappa(int yMappa){
	this->yMappa = yMappa;
}

void Hamburger::setX(){

	x = rand() % this->xMappa;
}
void Hamburger::setY(){

	y = rand() % this->yMappa;
}
