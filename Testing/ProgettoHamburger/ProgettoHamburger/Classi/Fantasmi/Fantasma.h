#pragma once
#include <string>

class fantasma
{
private:
	int x, y;
	char forma;
	int colore;
	bool spaventato;

public:
	fantasma();
	fantasma(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	void aggiornaPosizione(int x, int y);
	std::string toString();
	bool isSpaventato();
	void setSpaventato(bool s);
};