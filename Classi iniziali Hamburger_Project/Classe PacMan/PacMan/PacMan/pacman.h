#pragma once
#include <string>
using namespace std;

class Pacman {
private:
    int  x, y;          // posizione corrente del pacman
    int colore;         // colore del pacman
    int direzione;      // direzione corrente (W=sù, D=destra, S=giù, A=sinistra)
    int vite;           // vite rimanenti
    int punteggio;      // punteggio accumulato
    char forma;         // carattere che rappresenta Pacman

public:
    Pacman();    // Costruttore di default
    Pacman(int x, int y);       // Costruttore con posizione iniziale
    void muovi(int x, int y);     // Muove Pacman di dx e dy
    void set(int x, int y);   // Imposta direttamente la posizione
    void potenziamento();       // Aumenta il punteggio di 10
    void perdiVita();       // Decrementa le vite di 1 (non scende sotto 0)
    int getX(); // Ritorna la posizione x
    int getY(); // Ritorna la posizione y
    int getVite();  // Ritorna il numero di vite
    int getPunteggio(); // Ritorna il punteggio attuale
    char getForma();    // Ritorna la forma attuale del pacman
    bool isAlive();     // Controlla se Pacman è vivo
    void setForma(char f);      // Setter della forma
};