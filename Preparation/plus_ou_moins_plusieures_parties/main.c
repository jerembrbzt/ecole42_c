
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jouer_une_partie()
{
    const int MAX = 1, MIN = 1;
    int nombreMystere = 0, nombreEntre = 0, compteCoups = 0;
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    do
    {
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        compteCoups++;

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf("Bravo, le nombre mystere etait bien %d, vous l'avez trouve en %d coups !",
                   nombreMystere, compteCoups);
    } while (nombreEntre != nombreMystere);
}

int main(int argc, char **argv)
{
    int continuer;

    srand(time(NULL));

    do
    {
        jouer_une_partie();
        printf("veux tu faire une nouvelle partie ?\n0. Non\n1. Oui\n");
        scanf("%d", &continuer);
    } while (continuer);
    return 0;
}
