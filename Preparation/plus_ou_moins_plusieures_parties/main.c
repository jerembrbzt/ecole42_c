#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jouer_une_partie(int nombreMystere)
{
    int proposition = 0, compteCoups = 0;
    do
    {
        printf("Quelle est votre proposition ? ");
        scanf("%d", &proposition);
        compteCoups++;

        if (nombreMystere > proposition)
            printf("C'est plus !\n\n");
        else if (nombreMystere < proposition)
            printf("C'est moins !\n\n");
        else {
            printf("Bravo, le nombre mystere etait bien %d, vous l'avez trouve en %d coups !",
                   nombreMystere, compteCoups);
            return;
        }
    } while (1);
}

int genere_nombre_mystere()
{
    const int MIN = 1, MAX = 5;
    srand(time(NULL));
    return (rand() % (MAX - MIN + 1)) + MIN;
}

int demande_nombre_mystere()
{
    int nombreMystere;
    printf("Entrez le nombre mystere (l'autre joueur ne doit pas regarder)");
    scanf("%d", &nombreMystere);

    // Pour eviter que l'autre joueur ne voit le nombre mystere:
    for(int i=0;i<100;i++) {
        printf("\n");
    }
    return nombreMystere;
}

int main(int argc, char **argv)
{
    int continuer;
    do
    {
        jouer_une_partie(demande_nombre_mystere());
        printf("veux tu faire une nouvelle partie ?\n0. Non\n1. Oui\n");
        scanf("%d", &continuer);
    } while (continuer);
    return 0;
}
