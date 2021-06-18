#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int nombreDeVies = 5; // Au départ, le joueur a 5 vies

  printf("Vous avez %d vies\n", nombreDeVies);
  printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
  nombreDeVies = 4; // Il vient de perdre une vie !
  printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);

  return 0;
}
