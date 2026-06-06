#include "GameEngine.h"

GameEngine::GameEngine() : mappa(25, 12), mappa_w(25), mappa_h(12), giocatore(1, 1)
{
    timerSpavento = 0;
    inEsecuzione = true;
    inizializzaLivello();
}

void GameEngine::inizializzaLivello()
{
    mappa.setWallChar('@');
    mappa.setPointChar('.');
    mappa.setBigPointChar('O');

    for (int x = 0; x < mappa_w; ++x)
    {
        mappa.setBlock(x, 0, blocks::wall);
        mappa.setBlock(x, mappa_h - 1, blocks::wall);
    }
    for (int y = 0; y < mappa_h; ++y)
    {
        mappa.setBlock(0, y, blocks::wall);
        mappa.setBlock(mappa_w - 1, y, blocks::wall);
    }

    for (int y = 1; y < mappa_h - 1; ++y)
    {
        for (int x = 1; x < mappa_w - 1; ++x)
        {
            if ((x == 4 && y == 3) || (x == 20 && y == 8))
            {
                mappa.setBlock(x, y, blocks::bigpoint);
            }
            else if (x == 12 && (y >= 4 && y <= 7))
            {
                mappa.setBlock(x, y, blocks::wall);
            }
            else
            {
                mappa.setBlock(x, y, blocks::point);
            }
        }
    }

    nemici[0].setX(10); nemici[0].setY(5);
    nemici[1].setX(14); nemici[1].setY(5);
    nemici[2].setX(10); nemici[2].setY(6);
    nemici[3].setX(14); nemici[3].setY(6);

    premio.setXmappa(mappa_w - 2);
    premio.setYmappa(mappa_h - 2);
    premio.spawnHamburger();
}

void GameEngine::muoviFantasmi()
{
    for (int i = 0; i < 4; ++i)
    {
        int dx = (rand() % 3) - 1;
        int dy = (rand() % 3) - 1;

        int nextX = nemici[i].getX() + dx;
        int nextY = nemici[i].getY() + dy;

        if (mappa.isInside(nextX, nextY) && mappa.isWalkable(nextX, nextY))
        {
            nemici[i].aggiornaPosizione(dx, dy);
        }
    }
}

void GameEngine::eseguiTurno(char tastoPremuto)
{
    char mossa = convertitoreInput.normalizzaTasto(tastoPremuto);

    if (mossa == 'Q')
    {
        inEsecuzione = false;
        return;
    }

    int dx = 0, dy = 0;
    if (mossa == 'W') dy = -1;
    if (mossa == 'S') dy = 1;
    if (mossa == 'A') dx = -1;
    if (mossa == 'D') dx = 1;

    int nextX = giocatore.getX() + dx;
    int nextY = giocatore.getY() + dy;

    if (mappa.isInside(nextX, nextY) && mappa.isWalkable(nextX, nextY))
    {
        giocatore.muovi(dx, dy);
    }

    muoviFantasmi();

    if (timerSpavento > 0)
    {
        timerSpavento--;
        if (timerSpavento == 0)
        {
            for (int i = 0; i < 4; ++i)
            {
                nemici[i].setSpaventato(false);
            }
        }
    }

    collisioni.controllaMappa(giocatore, mappa, timerSpavento, nemici, 4);
    collisioni.controllaHamburger(giocatore, premio);
    bool vivo = collisioni.controllaFantasmi(giocatore, nemici, 4);

    if (!vivo)
    {
        inEsecuzione = false;
    }
}

bool GameEngine::isInEsecuzione()
{
    return inEsecuzione;
}

std::string GameEngine::ottieniSchermata()
{
    return visualizzatore.renderToString(mappa, mappa_w, mappa_h, giocatore, nemici, 4, premio);
}

int GameEngine::getPunteggioAttuale() 
{
    return giocatore.getPunteggio();
}