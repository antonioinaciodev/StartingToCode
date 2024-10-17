#include <stdio.h>
int main ()
{
    int x,n;

    scanf("%i", &x);
    for(n=1;n<=10;n++)
    {
        printf("%i * %i = %i\n", x, n, x*n);
    }
    return 0;
}