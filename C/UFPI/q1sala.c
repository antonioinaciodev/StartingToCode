#include <stdio.h>
#define MAX 5



//void preenche(int *array){  //CORRETO
//void preenche(int array[MAX]){   //CORRETO
void preenche(int array[]){
	int i = 0;
	for (i = 0;i < MAX;i++){
		scanf("%d",&array[i]);
	}
	return;
}


/* 
Objetivo: buscar um elemento em um vetor considerando seus primeiros "quant" elementos
Parâmetros:
           a - elemento a ser procurado
           array - acesso ao local para buscar o elemento
           quant - quantidade de elementos do vetor a ser considerada na busca
Retorno: 
           o índice do elemento no vetor ou -1 caso o elemento não seja encontrado
*/
int busca(int a,int array[],int quant){
	int j;
	for (j = 0;j < quant;j++){
		if ( a == array[j]){
				return j;
		}
	}
	return -1;	
}

/*
Objetivo: imprime os elementos de um vetor considerando seus primeiros "quant" elementos
Parâmetros:
           array - acesso ao vetor a ser impresso
           quant - quantidade de elementos do vetor que serão impressos
*/
void imprime(int array[],int quant){
	int i;
	for (i = 0;i < quant;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	return;
}

/* 
Objetivo: encontra os elementos em comum de dois vetores de tamanho MAX e 
          os coloca em um terceiro vetor
Parâmetros:
           array1 - acesso ao primeiro vetor
           array2 - acesso ao segundo vetor
           array3 - acesso ao terceiro vetor que será preenchido com elmentos comunus dos 2 primeiros
Retorno: 
           a quantidade de elementos em comum
*/
int geraRepetidos(int array1[],int array2[],int array3[]){
	int i,quant = 0;
	int ind;
	for (i = 0;i < MAX;i++){
		ind = busca(array1[i],array2,MAX);
		if (ind != -1 && busca(array1[i],array3,quant) == -1){			
			array3[quant] = array1[i];
			quant++;
		}
	}
	return quant;
}

int main(){
	int A[MAX], B[MAX], C[MAX]; /*A para o 1ªconjunto, B
						para o 2ª conjunto e C para armazenar os elementos em
						comum de A e B*/
	int quant;/*armazena a quantidade de elementos repetidos*/
	printf("Digite os %d elementos do conjunto 1:\n", MAX);
	preenche(A);
	printf("Digite os %d elementos do conjunto 2:\n", MAX);
	preenche(B);
	quant = geraRepetidos(A,B,C);
	//imprime(A,MAX);
	//imprime(B,MAX);
	printf("Elementos em comum:\n");
	imprime(C,quant);
	return 0;
}
