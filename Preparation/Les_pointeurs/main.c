#include <stdio.h>
#include <math.h>

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    // envoie l'adresse de heures et minutes
    decoupeMinutes(&heures, &minutes);

    // les valeurs ont été modifiées !
    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60; 
}