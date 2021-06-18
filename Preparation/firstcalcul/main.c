#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int resultat = 0, nombre1 = 0, nombre2 = 0;

     // on demande les nombres 1 et 2 ˆ l'utlisateur

     printf ("Entrez le nombre 1 : ");
     scanf("%d", &nombre1);
     printf ("Entrez le nombre 2 : ");
     scanf("%d", &nombre2);

     // on fait le calcul

     resultat = nombre1 *2 + nombre2;


     // on affiche l'addation a l'Žcran

     printf ("%d + %d =%d\n", nombre1, nombre2, resultat);

     return 0;
}
