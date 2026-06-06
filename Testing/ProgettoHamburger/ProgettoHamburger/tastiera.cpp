#include "Tastiera.h"

char Tastiera::normalizzaTasto(char input)
{
    if (input == 'w')
    {
        return 'W';
    }
    if (input == 's')
    {
        return 'S';
    }
    if (input == 'a')
    {
        return 'A';
    }
    if (input == 'd')
    {
        return 'D';
    }
    if (input == 'q')
    {
        return 'Q';
    }

    return input;
}