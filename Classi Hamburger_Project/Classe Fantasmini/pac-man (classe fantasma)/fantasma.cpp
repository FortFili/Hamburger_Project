#include "fantasma.h"

fantasma::fantasma() {
	this->x = 0;
	this->y = 0;
	forma = 'F';
	colore = 0;
}
fantasma::fantasma(int x, int y) {
	this->x = x;
	this->y = y;
}
int fantasma::getX() {
	return x;
}
int fantasma::getY() {
	return y;
}

void fantasma::setX(int x) {
	this->x = x;
}

void fantasma::setY(int y) {
	this->y = y;
}

void aggiornaPosizione(int x, int y) {
	this->x += x;
	this->y += y;
}