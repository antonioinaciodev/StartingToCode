#include <stdio.h>

int main()
{
    int i, rep;
    int x = 0;
    int vetor[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &rep);
    for (i = 0; i < 10; i++)
    {
        if (rep == vetor[i])
        {
            x = 1;
        }
    }
    if (x == 1)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
    return 0;
}