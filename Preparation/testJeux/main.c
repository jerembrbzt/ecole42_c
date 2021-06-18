
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int nombreMystere = 0, nombreEntre = 0, CompteCoups = 0, continuer = 1;
    const int MAX = 5, MIN = 1;

    // G�n�ration du nombre al�atoire
    while(continuer)
    {


    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /* La boucle du programme. Elle se r�p�te tant que l'utilisateur n'a pas trouv� le nombre myst�re */

    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        CompteCoups++;


        // On compare le nombre entr� avec le nombre myst�re

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else printf("Bravo, le nombre mystere etait bien %d, vous l'avez trouve en %d coups !", nombreMystere, CompteCoups);

    }
    while (nombreEntre != nombreMystere);
    printf ("veux tu faire une nouvelle partie ?\n0. Non\n1. Oui");
    scanf("%d    \n\n", &continuer);
    }

    // je teste git, c'est topppp
    
 return 0;
}
