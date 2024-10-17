#include <stdio.h>
int main()
{
    float a, b;
    printf("Calculadora de soma\n");
    printf("Digite dois valores: \n");
    //ultilizar o scanf para ler dois valores floats
    scanf("%f%f", &a, &b);
    printf("A soma é %f\n", a+b);
    return 0;
}