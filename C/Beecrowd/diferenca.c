#include <stdio.h>

int main()
{
    int A, B, C, D, dif;
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);
    dif = ((A*B) - (C*D));
    printf("DIFERENCA = %i\n", dif);

    return 0;
}