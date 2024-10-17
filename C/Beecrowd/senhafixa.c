#include <stdio.h>

int main()
{
    int senha, senhav;
    senhav = 2002;
    while(senha != senhav)
    {
        scanf("%i", &senha);
        if(senha != senhav)
        {
            printf("Senha Invalida\n");
        }
    }
    printf("Acesso Permitido\n");

    return 0;
}