#include "Pacman.h"

Pacman::Pacman()
{
	x = 0;
	y = 0;
	colore = 0;
	direzione = 0;
	vite = 3;
	punteggio = 0;
	forma = 'P';
}

Pacman::Pacman(int x, int y)
{
	this->x = x;
	this->y = y;
	colore = 0;
	direzione = 0;
	vite = 3;
	punteggio = 0;
	forma = 'P';
}

void Pacman::muovi(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Pacman::set(int nx, int ny)
{
	x = nx;
	y = ny;
}

void Pacman::potenziamento()
{
	punteggio += 10;
}

void Pacman::perdiVita()
{
	if (vite > 0)
	{
		vite--;
	}
}

int Pacman::getX()
{
	return x;
}

int Pacman::getY()
{
	return y;
}

int Pacman::getVite()
{
	return vite;
}

int Pacman::getPunteggio()
{
	return punteggio;
}

char Pacman::getForma()
{
	return forma;
}

bool Pacman::isAlive()
{
	return vite > 0;
}

void Pacman::setForma(char f)
{
	forma = f;
}

std::string Pacman::toString()
{
	return "PAC-MAN -> Pos: [" + std::to_string(x) + "," + std::to_string(y) + "] | Vite: " + std::to_string(vite) + " | Punteggio: " + std::to_string(punteggio);
}