#include <stdio.h>
int main(){
   float num1, num2, res;
   char op;
   printf("Digite dois numeros: ");
   scanf("%f%f", &num1, &num2);
   printf("Digite o operador[+,-,/,*] desejado: ");
   scanf(" %c", &op);
   switch(op){
       case '+': res = num1 + num2;
                 printf("SOMA: %.2f\n", res);
                 break;
       case '-': res = num1 - num2;
                 printf("SUBTRACAO: %.2f\n", res);
                 break;
       case '*': res = num1 * num2;
                 printf("MULTIPLICACAO: %.2f\n", res);
                 break;
       case '/': if (num2 != 0){
	             	 res = num1 / num2;
                 	 printf("DIVISAO: %.2f\n", res);
  	   	         }else
  	   	         	 printf("Divisor nao pode ser zero!\n");
                 break;			             
       default: printf("Operador invalido\n");
   }
   return 0;
}