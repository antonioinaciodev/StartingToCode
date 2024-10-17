#include <stdio.h>
int main()
{
    float nota1, nota2, nota3;

    printf("Calculadora de média\n");
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a Terceira nota: \n");
    scanf("%f", &nota3);
    printf("Sua média é %.2f!\n", (nota1+nota2+nota3)/3);
    return 0;
}