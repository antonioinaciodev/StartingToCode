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
	tFracao f;
	int max;
	printf("Digite o numerador da fracao: ");
	scanf("%d", &f.num);
	printf("Digite o denominador da fracao: ");
	scanf("%d", &f.den);
	while (f.den == 0)
	{
		printf("Denominador invalido. Digite novamente: ");
		scanf("%d", &f.den);
	}
	max = mdc(f.num, f.den);
	printf("Fracao equivalente irredutivel: %d/%d\n", f.num / max, f.den / max);
	return 0;
}