#pragma once
#include <string>
using namespace std;
class fantasma {

private:
	int x, y;
	char forma;
	int colore;

public:
	fantasma();
	fantasma(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	void aggiornaPosizione(int x, int y);
	string toString();

};
