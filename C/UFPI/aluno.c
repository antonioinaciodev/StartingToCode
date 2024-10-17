#include <stdio.h>
int main()
{
	float nota1, nota2, nota3;
	float media;

	/*
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	*/

	printf("Digite as 3 notas: ");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	printf("Media do aluno: %.2f\n", media);

	if 	(media >= 7)
	{
		printf("APROVADO\n");
	}
	if (media < 4)
	{
		printf("REPROVADO\n");
	}
	if (media >= 4  && media < 7)
	{
		printf("EXAME FINAL\n");
	}
	
	return 0;
}
