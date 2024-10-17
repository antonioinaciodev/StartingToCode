#include <stdio.h>
#define P 4 //colunas - quantidade de produtos
#define A 3  //linhas - quantidade de armazens

void lerEstoque(int est[A][P]){
	int i, j;
	printf("Digite o estoque:\n");
	for(i=0; i<A; i++ ){//para cada armazem(linha)
		printf("ARMAZEM %d:\n", i+1);
	    for(j=0; j<P; j++){//para cada produto(coluna)
    		printf("PRODUTO %d: ", j+1);
    		scanf("%d", &est[i][j]); 
		}
	}
}

void lerCusto(double custo[P]){
   int i;
   printf("Digite o custo de cada produto:\n"); 
   for(i=0; i<P; i++){
	   printf("Produto %d: R$ ", i+1);
	   scanf("%lf", &custo[i]);
   }
}

void imprimeCusto(double custo[P]){
   int i;
   printf("Custo de cada produto:\n"); 
   for(i=0; i<P; i++){
	   printf("Produto %d: R$ %.2lf\n", i+1, custo[i]);
   }
}

void imprimeEstoquePorProduto(int est[A][P]){
	int i, j;
	printf("ESTOQUE:\n");
	for(i=0; i<P; i++){ //Para cada produto(coluna)
		printf("PRODUTO %d:\n", i+1);
	    for(j=0; j<A; j++){//Para cada armazem com esse produto (linha)
	    	printf("Armazem %d: %d\n", j+1, est[j][i]);	        
		}
	}
}


void imprimeEstoquePorArmazem(int est[A][P]){
	int i, j;
	printf("ESTOQUE:\n");
	for(i=0; i<A; i++){ //Para cada armaz�m(linha)
		printf("ARMAZEM %d:\n", i+1);
	    for(j=0; j<P; j++){//Para cada produto nesse armaz�m (coluna)
	    	printf("Produto %d: %d\n", j+1, est[i][j]);	        
		}
	}
}


void imprimeTotalPorArmazem(int est[A][P]){
	int i, j;
	int soma;
	printf("Quantidade total de produtos por armazem:\n");
	for(i=0; i<A; i++){ //Para cada armaz�m(linha)
		soma = 0;
	    for(j=0; j<P; j++){//Para cada produto nesse armaz�m (coluna)
	    	soma += est[i][j];	        
		}
		printf("ARMAZEM %d: %d\n", i+1, soma);
	}
}

void imprimeTotalPorProduto(int est[A][P]){
	int i, j;
	int soma;
	printf("Quantidade total de produtos por tipo:\n");
	for(i=0; i<P; i++){ //Para cada produto(coluna)
		soma = 0;
	    for(j=0; j<A; j++){//Para cada armazem com esse produto (linha)
	    	soma += est[j][i];	        
		}
		printf("PRODUTO %d: %d\n", i+1, soma);
	}
}

void imprimeCustoTotalPorArmazem(int est[A][P], double custo[P]){
	int i, j;
	double soma;
	printf("Custo total por armazem:\n");
	for(i=0; i<A; i++){ //Para cada armaz�m(linha)
		soma = 0;
	    for(j=0; j<P; j++){//Para cada produto nesse armaz�m (coluna)
	    	soma += est[i][j] * custo[j];	        
		}
		printf("ARMAZEM %d: R$ %.2lf\n", i+1, soma);
	}	
}

void imprimeCustoTotalPorProduto(int est[A][P], double custo[P]){
	int i, j;
	double soma;
	printf("Custo total por produto:\n");
	for(i=0; i<P; i++){ //Para cada produto(coluna)
		soma = 0;
	    for(j=0; j<A; j++){//Para cada armazem com esse produto (linha)
	    	soma += est[j][i];	        
		}
		printf("PRODUTO %d: R$ %.2lf\n", i+1, soma * custo[i]);
	}
}

/*
Objetivo: Obriga o usu�rio a digitar um n�mero inteiro dentro de uma faixa v�lida
Par�metros: min - menor valor aceito para o n�mero
            max - maior valor aceito para o n�mero
Retorno: n�mero inteiro dentro da faixa v�lida
*/
int obrigaValor(int min, int max){
	int num;
	printf("Digite um valor de %d a %d: ", min, max);
	scanf("%d", &num);	
	while(num<min||num>max){
		printf("Valor incorreto. Digite novamente um valor de %d a %d: ", min, max);
		scanf("%d", &num);		
	}	
	return num;
}

void alteraProduto(int est[A][P]){
	int arm;
	int prod;
	int resp;
	int novo;
	
	printf("Tipo do Produto\n");
	prod = obrigaValor(1, P);
	printf("Numero do Armazem\n");
	arm = obrigaValor(1, A);
	printf("Quantidade atual do produto tipo %d no armazem %d: %d\n", 
	        prod, arm, est[arm-1][prod-1]);
	printf("Digite a nova quantidade: ");
	scanf("%d", &novo);
	while(novo<0){
		printf("Valor incorreto. Digite um valor maior ou igual a zero. ");
		printf("Digite a nova quantidade: ");
		scanf("%d", &novo);			
	}
	printf("Deseja realmente alterar para %d? [1 - sim <outro valor>-nao] ", novo);
	scanf("%d", &resp);
	if (resp==1){
		est[arm-1][prod-1] = novo; 
		printf("Quantidade alterada com sucesso!");
	}else
		printf("Quantidade nao alterada!");
		
}

void alteraCusto(double custo[P]){
	int prod, resp;
	double novo;
	printf("Tipo do Produto\n");
	prod = obrigaValor(1, P);
	printf("Valor atual de uma unidade do produto tipo %d: R$ %.2lf\n", 
	        prod, custo[prod-1]);
	printf("Digite o novo valor: R$ ");
	scanf("%lf", &novo);
	while(novo<0){
		printf("Valor incorreto. Digite um valor maior ou igual a zero. ");
		printf("Digite o novo valor: R$ ");
		scanf("%lf", &novo);			
	}
	printf("Deseja realmente alterar para R$ %.2lf? [1 - sim <outro valor>-nao] ", novo);
	scanf("%d", &resp);
	if (resp==1){
		custo[prod-1] = novo; 
		printf("Quantidade alterada com sucesso!");
	}else
		printf("Quantidade nao alterada!");
	
}

/*
Objetivo: imprimir o menu e fazer com que o usu�rio escolha uma opcao do menu
Retorno: a op��o escolhida pelo usu�rio    
*/
int menu(){
	int opcao; 
	printf("------------------------------------\n");   
	printf("\nMENU\n"
          "1. Estoque por tipo de produto\n"
     	  "2. Estoque por armazem\n"
     	  "3. Custo unitario de cada tipo de produto\n"
	      "4. Total de unidades por tipo produto\n"
		  "5. Total de unidade em cada armazem\n"
		  "6. Custo total por tipo de produto\n"
		  "7. Custo total em cada armazem\n"
		  "8. Alterar quantidade de um tipo de produto\n"
		  "9. Alterar o custo de um tipo de produto\n"
		  "0. Sair\n");
	printf("Digite uma opcao do menu: ");
	scanf("%d", &opcao);
	return opcao;
}

int main(){
	int estoque[A][P];
	double custo[P];
	int resp; //escolha do usu�rio em rela��o ao menu
	
	lerEstoque(estoque);  	
	lerCusto(custo);      
	
	do{  
	    resp = menu();//1 - mostrar o menu 
	                  //2 - escolher uma opcao do menu
	     		        
	   //3 - de acordo com a op��o escolhida a a��o apropriada ocorre
	   switch(resp){  
		  case 1: imprimeEstoquePorProduto(estoque);
		  	      break;
		  case 2: imprimeEstoquePorArmazem(estoque);;
		  	      break;
		  case 3: imprimeCusto(custo);
		  	      break;		  	  
		  case 4: imprimeTotalPorProduto(estoque);
		  	      break;
		  case 5: imprimeTotalPorArmazem(estoque);
		          printf("\n");
		  	      break;
		  case 6: imprimeCustoTotalPorProduto(estoque, custo);
		  	      break;
		  case 7: imprimeCustoTotalPorArmazem(estoque, custo);
		  	      break;
		  case 8: alteraProduto(estoque);
		  	      break;
		  case 9: alteraCusto(custo);
		  	      break;
		  case 0:
		  	      break;
		  default: printf("Opcao invalida!\n\n");																				 
	   }
	   
	   
	   		    
	}while (resp!=0);
	
	return 0;
}