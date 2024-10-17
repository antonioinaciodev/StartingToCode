#include <stdio.h>

int main(){
	int resp;

	printf("Digite um numero de 1 a 4 e receba um elogio: ");
	scanf("%d", &resp);
	if (resp==1) {
	    printf("Voce eh a beleza personificada!\n");
	}else if (resp==2) 
	    printf("Voce eh muito inteligente!\n");
	else if (resp==3)
	    printf("Como voce eh gentil!\n");
	else if (resp==4)
	    printf("Seu sorriso encanta!\n");
    	else
            printf("Opcao invalida!\n\n");	
	
	return 0;		
}