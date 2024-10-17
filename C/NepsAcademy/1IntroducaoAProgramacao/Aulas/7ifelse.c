#include <stdio.h>
int main()
{
    float media;

    printf("Digite sua média: ");
    scanf("%f", &media);
    if(media>=7.0)
    {printf("aprovado!\n");}
    else
    {printf("reprovado!\n");}

    return 0;
}