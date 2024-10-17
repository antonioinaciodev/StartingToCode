#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num>0)
    	printf("Positivo\n");
    if (num<0)
    	printf("Negativo\n");
    if (num==0)
    	printf("Nulo\n");	    
    return 0;
}