#pragma once
#include <string>

class Pacman
{
private:
    int x, y;
    int colore;
    int direzione;
    int vite;
    int punteggio;
    char forma;

public:
    Pacman();
    Pacman(int x, int y);
    void muovi(int dx, int dy);
    void set(int x, int y);
    void potenziamento();
    void perdiVita();
    int getX();
    int getY();
    int getVite();
    int getPunteggio();
    char getForma();
    bool isAlive();
    void setForma(char f);
    std::string toString();
};