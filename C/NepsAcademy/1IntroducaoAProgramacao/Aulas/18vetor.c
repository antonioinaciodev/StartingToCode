#include <stdio.h>

int main()
{
//ler quantidade de espaços do vetor
    int i, cont;
    scanf("%d", &i);
//escanear os elementos
    int vetor[i];
    for (cont = 0; cont < i; cont++)
    {
        scanf("%d", &vetor[cont]);
    }
//imprimir os elementos
    for (cont = 0; cont < i; cont++)
    {
        printf("%d", vetor[cont]);
    }
    return 0;
}