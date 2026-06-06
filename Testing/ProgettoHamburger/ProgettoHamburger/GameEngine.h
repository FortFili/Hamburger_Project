#pragma once
#include "Classi/Mappa/mappa.h"
#include "Classi/PacMan/pacman.h"
#include "Classi/Fantasmi/Fantasma.h"
#include "Classi/Hamburger/Hamburger.h"
#include "Campo.h"
#include "Tastiera.h"
#include "GestoreCollisioni.h"
#include <string>

class GameEngine
{
private:
    Mappa mappa;
    int mappa_w;
    int mappa_h;

    Pacman giocatore;
    fantasma nemici[4];
    Hamburger premio;

    Campo visualizzatore;
    Tastiera convertitoreInput;
    GestoreCollisioni collisioni;

    int timerSpavento;
    bool inEsecuzione;

    void inizializzaLivello();
    void muoviFantasmi();

public:
    GameEngine();

    //metodi pubblici per permettere al Main o alla una GUI di controllare il gioco
    void eseguiTurno(char tastoPremuto);
    bool isInEsecuzione();
    std::string ottieniSchermata();
    int getPunteggioAttuale();
};