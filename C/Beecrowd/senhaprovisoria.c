#include <stdio.h>
#include <string.h>

int main()
{
    int rep, i, j;
    char senha[101];

    scanf("%d", &rep);
    getchar(); // Consumir o '\n' após a leitura do número de repetições

    for (i = 0; i < rep; i++)
    {
        fgets(senha, sizeof(senha), stdin);
        
        // Remover o '\n' que fgets pode ter lido
        senha[strcspn(senha, "\n")] = 0;

        // Verificar se a string começa com "RA" e se tem pelo menos 20 caracteres
        if (strncmp(senha, "RA", 2) != 0 || strlen(senha) != 20)
        {
            printf("INVALID DATA\n");
        }
        else
        {
            // Procurar o primeiro dígito não-zero a partir da posição 2
            for (j = 2; j < 20; j++)
            {
                if (senha[j] != '0')
                {
                    // Imprimir a partir do primeiro dígito não-zero até o final
                    printf("%s\n", &senha[j]);
                    break;
                }
            }
            
            // Se só havia zeros, imprimir 0
            if (j == 20)
            {
                printf("0\n");
            }
        }
    }
    return 0;
}
