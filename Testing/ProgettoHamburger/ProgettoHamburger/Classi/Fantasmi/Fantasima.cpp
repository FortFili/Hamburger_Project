#include "Fantasma.h"

fantasma::fantasma()
{
	this->x = 0;
	this->y = 0;
	forma = 'F';
	colore = 0;
	spaventato = false;
}

fantasma::fantasma(int x, int y)
{
	this->x = x;
	this->y = y;
	forma = 'F';
	colore = 0;
	spaventato = false;
}

int fantasma::getX()
{
	return x;
}
int fantasma::getY()
{
	return y;
}
void fantasma::setX(int x)
{
	this->x = x;
}
void fantasma::setY(int y)
{
	this->y = y;
}

void fantasma::aggiornaPosizione(int x, int y)
{
	this->x += x;
	this->y += y;
}

bool fantasma::isSpaventato()
{
	return spaventato;
}

void fantasma::setSpaventato(bool s)
{
	spaventato = s;
}

std::string fantasma::toString()
{
	std::string stato = "";
	if (spaventato)
	{
		stato = " *SPAVENTATO*";
	}
	return "Fantasma [" + std::to_string(x) + "," + std::to_string(y) + "]" + stato;
}