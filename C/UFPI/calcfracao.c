#include <stdio.h>

typedef struct
{
    int num;
    int den;
} tFracao;

int mdc(int num1, int num2)
{
    int resto;
    while (num2 != 0)
    {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    return num1;
}

int main()
{
    tFracao f1, f2, f3;
    int conti = 1;
    char barra, operacao;

    while (conti != 0)
    {
        printf("Digite sua operação com fração: ");
        scanf("%d", &f1.num);
        scanf(" %c", &barra);
        scanf("%d", &f1.den);
        scanf(" %c", &operacao);
        scanf("%d", &f2.num);
        scanf(" %c", &barra);
        scanf("%d", &f2.den);

        switch (operacao)
        {
        case '+':
            f3.num = (f1.num * f2.den + f2.num * f1.den);
            f3.den = (f1.den * f2.den);
            break;
        case '-':
            f3.num = (f1.num * f2.den - f2.num * f1.den);
            f3.den = (f1.den * f2.den);
            break;
        case '*':
            f3.num = (f1.num * f2.num);
            f3.den = (f1.den * f2.den);
            break;
        case '/':
            f3.num = (f1.num * f2.den);
            f3.den = (f2.num * f1.den);
            break;
        }
        int divisor = mdc(f3.num, f3.den);
        f3.num /= divisor;
        f3.den /= divisor;
        printf("%d/%d\n", f3.num, f3.den);
        printf("Digite 1 para continuar ou 0 para parar: ");
        scanf("%d", &conti);
        while (conti != 1 && conti != 0)
        {
            printf("Valor inválido, digite novamente: ");
            scanf("%d", &conti);
        }
    }
    printf("Finalizado!");
    
    return 0;
}