#include <stdio.h>
int main(){
	float nota;
	char resp;
	int cont4 = 0;
	float maiorN = 0, menorN = 10;
	float soma = 0, soma7 = 0, media, media7;
	int cont = 0, cont7 = 0;
    do{ 
    	do{
			printf("Digite a nota %d: ", cont + 1);
			scanf("%f", &nota);  //Falta obrigar a digitar nota valida
		}while(nota<0 || nota>10);
		
		soma = soma + nota;
		cont++;
		
		//Continuar o código de análise da nota
		
        printf("Deseja digitar mais uma nota[s-sim, outro valor - nao]: ");
		scanf(" %c", &resp);		
		
	}while(resp == 's');
	
	media = soma / cont;
	printf("MEDIA TOTAL: %.2f\n", media);
	
	return 0;
}