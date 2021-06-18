#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int age = 0; // On initialise la variable ˆ 0

  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // On demande d'entrer l'‰ge avec scanf
  printf("Ah ! Vous avez donc %d ans !\n\n", age);

  return 0;
}
