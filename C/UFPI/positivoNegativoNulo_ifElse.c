#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num>0)
    	printf("Positivo\n");
    else if (num<0)
        printf("Negativo\n");
    else
	printf("Nulo\n");
			   
    return 0;
}