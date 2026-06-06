#pragma once
#include "Classi/Mappa/mappa.h"
#include "Classi/PacMan/pacman.h"
#include "Classi/Hamburger/Hamburger.h"
#include "Classi/Fantasmi/Fantasma.h"

class GestoreCollisioni
{
public:
    void controllaMappa(Pacman& pacman, Mappa& mappa, int& timerSpavento, fantasma fantasmi[], int numFantasmi);
    void controllaHamburger(Pacman& pacman, Hamburger& hamb);
    bool controllaFantasmi(Pacman& pacman, fantasma fantasmi[], int numFantasmi);
};