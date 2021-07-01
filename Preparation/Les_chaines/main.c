#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    char chaine [100];
    int age = 15;

    //15 ans dans chaine 

    sprintf(chaine, " tu as %d ans ! ", age);

    printf("%s", chaine);    

    return 0;
}



