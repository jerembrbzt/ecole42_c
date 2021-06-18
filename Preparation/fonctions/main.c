#include <stdio.h>
#include <stdlib.h>

double conversion(double CHF)
{
    return CHF / 6.55957;
}

int main(int argc, char *argv[])
{
    printf("10 CHF = %fF\n", conversion(10));
    printf("50 CHF = %fF\n", conversion(50));
    printf("100 CHF = %fF\n", conversion(100));
    printf("200 CHF = %fF\n", conversion(200));

    return 0;
}
