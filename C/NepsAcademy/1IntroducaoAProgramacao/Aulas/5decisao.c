#include <stdio.h>
int main()
{
    int a;

    printf("Digite para relaciona-lo a 5: ");
    scanf("%d", &a);
    if(a>5)
    {printf("Maior que 5");}
    if(a==5)
    {printf("igual a 5");}
    if(a<5)
    {printf("Menor que 5");}

    return 0;
}