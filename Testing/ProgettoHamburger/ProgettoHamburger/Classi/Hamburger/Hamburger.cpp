#include "Hamburger.h"

Hamburger::Hamburger()
{
	x = -1;
	y = -1;
	xMappa = 0;
	yMappa = 0;
}

void Hamburger::setXmappa(int xMappa)
{
	this->xMappa = xMappa;
}

void Hamburger::setYmappa(int yMappa)
{
	this->yMappa = yMappa;
}

void Hamburger::setX()
{
	if (this->xMappa > 0)
	{
		x = rand() % this->xMappa;
	}
}

void Hamburger::setY()
{
	if (this->yMappa > 0)
	{
		y = rand() % this->yMappa;
	}
}

void Hamburger::spawnHamburger()
{
	setX();
	setY();
}

void Hamburger::eliminaHamburger()
{
	x = -1;
	y = -1;
}

int Hamburger::getX()
{
	return x;
}
int Hamburger::getY()
{
	return y;
}

std::string Hamburger::toString()
{
	if (x == -1 && y == -1)
	{
		return "Hamburger: Non presente sul campo";
	}
	return "Hamburger Speciale -> Pos: [" + std::to_string(x) + "," + std::to_string(y) + "]";
}