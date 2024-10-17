#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite sua 1° nota: ");
    scanf("%f", &nota1);
    printf("Digite sua 2° nota: ");
    scanf("%f", &nota2);
    printf("Digite sua 3° nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    if(media>=7)
        {printf("Sua média é %.2f, Aprovado!", media);}
    if(media<4)
        {printf("Sua média é %.2f, Reprovado", media);}
    if(7>media>=4)
        {printf("Sua média é %.2f, Exame Final", media);}

    return 0;
}