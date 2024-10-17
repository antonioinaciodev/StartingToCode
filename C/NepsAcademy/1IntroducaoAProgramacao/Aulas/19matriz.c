#include <stdio.h>

int main()
{
    // ler quantidade de linhas e colunas
    int l, c, i, j;
    printf("linhas x colunas: ");
    scanf("%d%d", &l, &c);
    int matriz[l][c];

    // preencher linhas e colunas
    for (i = 0; i < l; i++)
    {
        printf("linha %d: ", i + 1);
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    // imprimir em formato de matriz
    printf("matriz:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}