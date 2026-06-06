#include <iostream>
#include "Pacman.h"
using namespace std;

int main() {
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

}