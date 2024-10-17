#include <stdio.h>
int main()
{
    int x;

    printf("Qual o ano da quebra da bolsa?");
    do
    {
        scanf("%i", &x);
    }while (x!=1929);
    printf("Acertou o ano!\n");

    return 0;
}