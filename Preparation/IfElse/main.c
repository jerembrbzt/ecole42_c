#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int choixMenu;

printf ("------MENU-----\n");
printf ("1. Royal cheese\n");
printf ("2. McDeluxe\n");
printf ("3. McBacon\n");
printf("4. BigMac\n");
printf("Votre choix ?");
scanf("%d", &choixMenu);

switch (choixMenu)
{
    case 1:
        printf("Vous avez chosi RooyalCheese\n");
        break;
    case 2:
        printf("Vous avez choisi McDelux\n");
        break;
    case 3:
        printf("vous avez choisi McBacon\n");
        break;
    case 4:
        printf("Vous avez choisi BigMac\n");
        break;
}

return 0;

}
