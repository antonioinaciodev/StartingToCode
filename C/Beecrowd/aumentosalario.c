#include <stdio.h>
int main()
{
    double salario, ns, rj;

    scanf("%lf", &salario);
    if (salario <= 400)
    {
        ns = salario * 1.15;
        rj = salario * 0.15;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", ns, rj);
    }
    else if (salario <= 800)
    {
        ns = salario * 1.12;
        rj = salario * 0.12;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", ns, rj);
    }
    else if (salario <= 1200)
    {
        ns = salario * 1.10;
        rj = salario * 0.10;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", ns, rj);
    }
    else if (salario <= 2000)
    {
        ns = salario * 1.07;
        rj = salario * 0.07;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", ns, rj);
    }
    else
    {
        ns = salario * 1.04;
        rj = salario * 0.04;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", ns, rj);
    }

    return 0;
}