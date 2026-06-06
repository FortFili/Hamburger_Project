#pragma once
#include <string>

class Hamburger
{
private:
	int x, y;
	int xMappa, yMappa;

public:
	Hamburger();
	void setXmappa(int xMappa);
	void setYmappa(int yMappa);
	void setX();
	void setY();
	void spawnHamburger();
	void eliminaHamburger();
	int getX();
	int getY();
	std::string toString();
};