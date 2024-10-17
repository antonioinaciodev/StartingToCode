#include <stdio.h>
int main(){
	float nota1, nota2, nota3;
	float media;
	printf("Digite as 3 notas: ");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	media = (nota1 + nota2 + nota3)/3;
	if (media>=7)
	     printf("APROVADO!\n");
	else if (media<4)
	     printf("REPROVADO!\n");
	else
             printf("EF\n");		
	return 0;
}