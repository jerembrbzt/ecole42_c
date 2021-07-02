#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    int nombreEntre = 0, nombreMystere = 0, coups = 0, nombreJ1 = 0;
    int continuer = 1, mode = 0;
    int MIN = 1, MAX = 100;
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("Quel mode vous interesse?\n1. Mode 1 joueur\n2. Mode 2 joueurs\nChoix: ");
    scanf("%ld", &mode);
    if (mode == 1)
    {
        while(continuer)
        {
            do{
                printf("Entrez le nombre mystere: ");
                scanf("%d", &nombreEntre);
                coups++;
                if(nombreEntre > nombreMystere)
                printf("C'est moins !\n\n");
                else if(nombreEntre < nombreMystere)
                printf("C'est plus !\n\n");
                else
                printf("Bravo, le nombre mystere etait bien %d, vous l'avez trouve en %d coups !\n\n", nombreMystere, coups);
            } while (nombreMystere != nombreEntre);
    }
            printf("Une nouvelle partie?\n0. Non\n1. Oui");
            scanf("%ld", &continuer);
}
    else
    {
       while(continuer)

        printf("Joueur 1, entrez le nombre mystere");
        scanf("%d", &nombreJ1);
        do {
            printf("Entrez le nombre mystere: ");
            scanf("%d", &nombreEntre);
            if(nombreEntre > nombreJ1)
            printf("C'est moins !\n\n");
            else if(nombreEntre < nombreJ1)
            printf("C'est plus !\n\n");
            else
            printf("Bravo, le nombre mystere du joueur 1 etait bien %d\n", nombreJ1);
            } while (nombreJ1 != nombreEntre);
            printf("Une nouvelle partie?\n0. Non\n1. Oui");
            scanf("%ld", &continuer);
    }
    return 0;
}
