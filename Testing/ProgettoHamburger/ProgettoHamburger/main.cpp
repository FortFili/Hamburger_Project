#include "GameEngine.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // Inizializzazione del seed per i calcoli casuali
    srand(static_cast<unsigned int>(time(0)));

    // Istanza del motore di gioco
    GameEngine game;

    // Loop principale gestito dal Main via Console
    while (game.isInEsecuzione())
    {
        // 1. Pulisce la console prima di disegnare il frame corrente
#ifdef _WIN32
        system("CLS");
#else
        cout << "\x1B[2J\x1B[H";
#endif

        // 2. Recupera la stringa dal motore grafico puro e la stampa a schermo
        cout << game.ottieniSchermata();

        // 3. Richiede l'input all'utente direttamente dal Main
        char sceltaUtente;
        cout << "Muoviti (W=Su, A=Sinistra, S=Giu, D=Destra, Q=Esci): ";
        cin >> sceltaUtente;

        // 4. Invia l'input al motore di gioco per aggiornare lo stato
        game.eseguiTurno(sceltaUtente);
    }

    // Schermata di Game Over gestita a livello di interfaccia utente principale
    cout << "\n========================================================\n";
    cout << "                     GAME OVER                          \n";
    cout << "             Punteggio Totale Raggiunto: " << game.getPunteggioAttuale() << "\n";
    cout << "========================================================\n\n";

    return 0;
}