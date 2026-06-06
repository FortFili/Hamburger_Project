#include "GestoreCollisioni.h"

void GestoreCollisioni::controllaMappa(Pacman& pacman, Mappa& mappa, int& timerSpavento, fantasma fantasmi[], int numFantasmi)
{
    int px = pacman.getX();
    int py = pacman.getY();

    blocks blocco = mappa.getBlock(px, py);

    if (blocco == blocks::point)
    {
        pacman.potenziamento();
        mappa.setBlock(px, py, blocks::air);
    }
    else if (blocco == blocks::bigpoint)
    {
        pacman.potenziamento();
        pacman.potenziamento();
        mappa.setBlock(px, py, blocks::air);

        timerSpavento = 8;
        for (int i = 0; i < numFantasmi; ++i)
        {
            fantasmi[i].setSpaventato(true);
        }
    }
}

void GestoreCollisioni::controllaHamburger(Pacman& pacman, Hamburger& hamb)
{
    if (pacman.getX() == hamb.getX() && pacman.getY() == hamb.getY())
    {
        pacman.potenziamento();
        pacman.potenziamento();
        pacman.potenziamento();
        hamb.eliminaHamburger();
    }
}

bool GestoreCollisioni::controllaFantasmi(Pacman& pacman, fantasma fantasmi[], int numFantasmi)
{
    int px = pacman.getX();
    int py = pacman.getY();

    for (int i = 0; i < numFantasmi; ++i)
    {
        if (fantasmi[i].getX() == px && fantasmi[i].getY() == py)
        {
            if (fantasmi[i].isSpaventato())
            {
                pacman.potenziamento();
                fantasmi[i].setX(12);
                fantasmi[i].setY(5);
                fantasmi[i].setSpaventato(false);
            }
            else
            {
                pacman.perdiVita();
                pacman.set(1, 1);
                if (!pacman.isAlive())
                {
                    return false;
                }
            }
        }
    }
    return true;
}