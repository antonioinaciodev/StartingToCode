#include <stdio.h>

int main()
{
    int i, j, n, rep;
    char mensagem[51];
    char mensagemdecodificada[51];

    scanf("%d", &rep);
    for (i = 0; i != rep; i++)
    {
        scanf(" %[^\n]", mensagem);
        n = 0;
        for (j = 0; mensagem[j] != '\0'; j++)
        {
            if (j == 0 || (mensagem[j] != ' ' && mensagem[j - 1] == ' '))
            {
                mensagemdecodificada[n] = mensagem[j];
                n++;
            }
        }
        mensagemdecodificada[n] = '\0';
        for (j = 0; j < n; j++)
        {
            printf("%c", mensagemdecodificada[j]);
        }
        printf("\n");
    }
    return 0;
}