#include <stdio.h>
#include <stdlib.h>

void affiche(int *tableau, int tailleTableau);

int main(int argc, char *argv[])
{
    int tableau[] = {10, 15, 3, 4}; 

    //tableau contenu 
    affiche(tableau, 4);


    return 0;

}


void affiche(int *tableau, int tailleTableau)
{
    int i; 

    for (i = 0 ; i < tailleTableau ; i++)
    {   
    printf("%d\n", tableau [i]);


    }
}

