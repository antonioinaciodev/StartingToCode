#include <stdio.h>
#define MAX 5


/*
Objetivo: imprime os elementos de um vetor considerando seus primeiros "quant" elementos
Parâmetros:
           vet - acesso ao vetor a ser impresso
           quant - quantidade de elementos do vetor que serão impressos
*/
void imprime(int vet[], int quant){ 
	int i;
	
	for(i=0;i<quant;i++) 
		printf("%d ",vet[i]);
	printf("\n");
	
	return;
}

/* 
Objetivo: encontra os elementos em comum de dois vetores de tamanho MAX e 
          os coloca em um terceiro vetor
Parâmetros:
           a - acesso ao primeiro vetor
           b - acesso ao segundo vetor
           c - acesso ao terceiro vetor que será preenchido com elmentos comunus dos 2 primeiros
Retorno: 
           a quantidade de elementos em comum
*/
int geraRepetidos(int a[], int b[], int c[]){
	int j, i, k, ja_esta, r=0;
	for(i=0; i<MAX;i++){
		
		for(j=0;j<MAX;j++){
			
			ja_esta = 0;
			
			if(a[i] == b[j]){
				
				for(k=0;k<r;k++){
					if(c[k] == a[i]) 
						ja_esta = 1;
				}
			
				if(ja_esta != 1){
					c[r]=a[i];
					r++;
				}
				break;
			}
					
		}
		
	}
	
	return r;	
}

/* Função preenche
Objetivo: preenche todos os "MAX" elementos de um vetor
Parâmetros:
           vet - acesso ao vetor a ser preenchido
*/
void preenche(int vet[]){
	int i;
	
	for (i=0; i<MAX; i++){
		scanf("%d", &vet[i]);
	}
	
	return;
}
int main() {
	int A[MAX], B[MAX], C[MAX]; /*A para o 1ªconjunto, B
						para o 2ª conjunto e C para armazenar os elementos em
						comum de A e B*/
	int quant; /*armazena a quantidade de elementos repetidos*/
	printf("Digite os %d elementos do conjunto 1:\n", MAX);
	preenche(A);
	printf("Digite os %d elementos do conjunto 2:\n", MAX);
	preenche(B);
	
	quant = geraRepetidos(A,B,C);
	printf("Elementos em comum:\n");
	imprime(C,quant);
	
	return 0;
}