#pragma once
#include "Classi/Mappa/mappa.h"
#include "Classi/PacMan/pacman.h"
#include "Classi/Fantasmi/Fantasma.h"
#include "Classi/Hamburger/Hamburger.h"
#include <string>

class Campo
{
public:
    std::string renderToString(const Mappa& mappa, int width, int height, Pacman& pacman, fantasma fantasmi[], int numFantasmi, Hamburger& hamb);
};