#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int menu;

printf("------MENU-------\n");
printf("1. Vodka\n");
printf("2. Captain\n");
printf("3. Gin\n");
printf("4. Jack\n");
printf("Votre choix");
scanf("%d  ", &menu  );

switch (menu)
{
    case 1:
        printf("Vous avez choisi une Vodka\n");
        break;
    case 2:
        printf("Vous avez choisi une captain");
        break;
    case 3:
        printf("Vous avez choisi UN GIN");
        break;
    case 4:
        printf("Vous avez choisi une jack ");
        break;

}
     return 0;
}
