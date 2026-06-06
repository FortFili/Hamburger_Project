#include "Pacman.h"

Pacman::Pacman() {
    x = 0;           // posizione iniziale X
    y = 0;           // posizione iniziale Y
    colore = 0;      // colore predefinito (non usato)
    direzione = 0;   // direzione iniziale
    vite = 3;        // Pacman parte con 3 vite
    punteggio = 0;   // punteggio iniziale
    forma = 'P';     // forma predefinita
}

// Secondo costruttore che specifica la posizione del pacman
Pacman::Pacman(int x, int y) {
    this->x = x;     // inizializza x della classe con un valore variabile
    this->y = y;     // inizializza y della classe nel private con un valore variabile
    colore = 0;
    direzione = 0;
    vite = 3;
    punteggio = 0;
    forma = 'F';    // simbolo iniziale del pacman
}

void Pacman::muovi(int dx, int dy) {
    x += dx;    //aggiunge alla x il movimento verso dx impostato dalla muovi
    y += dy;     //aggiunge alla y il movimento verso dy
}

void Pacman::set(int nx, int ny) {
    x = nx;
    y = ny;
}

void Pacman::potenziamento() {
    punteggio += 10;
}

void Pacman::perdiVita() {
    if (vite > 0) {
        vite--;
    }
}

int Pacman::getX() {
    return x;
}

int Pacman::getY() {
    return y;
}

int Pacman::getVite() {
    return vite;
}

int Pacman::getPunteggio() {
    return punteggio;
}

char Pacman::getForma() {
    return forma;
}

bool Pacman::isAlive() {
    return vite > 0;
}

void Pacman::setForma(char f) {
    forma = f;
}