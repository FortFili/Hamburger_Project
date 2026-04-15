
#include "Classi/Fantasmi/Fantasma.h"
#include "Classi/Hamburger/hamburger.h"
#include "Classi/Mappa/mappa.h"
#include "Classi/PacMan/pacman.h"

#include <iostream>

using namespace std;

int main() {

    //
	// TESTING PACMAN
    //

    // Creo oggetto p1 con costruttore di default
    Pacman p1;

    // Creo oggetto p2 con posizione iniziale
    Pacman p2(10, 10);

    // Esempio di movimento: p1 si sposta di 1 a destra e 1 in basso
    p1.muovi(1, 1);

    // p1 perde una vita
    p1.perdiVita();

    // p1 ottiene un potenziamento di + 10 punti
    p1.potenziamento();

    //Stato pacman 1 
    cout << "Pacman 1:" << endl;
    cout << "Forma: " << p1.getForma() << endl;
    cout << "Posizione X: " << p1.getX() << endl;
    cout << "Posizione Y: " << p1.getY() << endl;
    cout << "Vite: " << p1.getVite() << endl;
    cout << "Punteggio: " << p1.getPunteggio() << endl;
    if (p1.isAlive()) {
        cout << "Alive: Si" << endl;
    }
    else {
        cout << "Alive: No" << endl;
    }

    cout << endl;

    //Stato pacman 2
    cout << "Pacman 2:" << endl;
    cout << "Forma: " << p2.getForma() << endl;
    cout << "Posizione X: " << p2.getX() << endl;
    cout << "Posizione Y: " << p2.getY() << endl;
    cout << "Vite: " << p2.getVite() << endl;
    cout << "Punteggio: " << p2.getPunteggio() << endl;

    if (p2.isAlive()) {
        cout << "Vivo" << endl;
    }
    else {
        cout << "Morto" << endl;
    }

    cout << endl << "Test completato" << endl;



    //
    // TESTING MAPPA
    //

    Mappa mainmap(200, 40);

    std::cout << mainmap.debugToString();

    mainmap.setPointChar('o');
    mainmap.setBigPointChar('O');
    mainmap.setWallChar('@');

    std::cout << mainmap.debugToString();

    mainmap.setBlock(10, 20, blocks::wall);
    cout << (mainmap.getBlock(10, 20) == blocks::wall ? "Corretto" : "Sbagliato");
    cout << "\n\n";




    //
    // TESTING HAMBURGER
    //

    Hamburger hamb;
    hamb.setXmappa(150);
    hamb.setYmappa(444);
    hamb.setX();
    hamb.setY();


    //
    // TESTING FANTASMA
    //

    fantasma fant, asma(10, 20);

    fant.setX(33);
    fant.setY(66);
    cout << "X: " << fant.getX() << endl;
    cout << "Y: " << fant.getY() << endl;

    cout << "X: " << asma.getX() << endl;
    cout << "Y: " << asma.getY() << endl;


    ////////////// test push

    cout << "\n\n\nFine test.";

}