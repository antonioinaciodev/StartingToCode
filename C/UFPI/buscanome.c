#include <stdio.h>
#include <string.h>
#define N 3

void pesquisar(char *nome, char nomes[][100]){
    for(int i = 0; i < N; i++){
        if(strcmp(nome, nomes[i]) == 0){
            printf("O nome está na posição %d\n", i);
            return;
        }
    }
    printf("Nome não encontrado!\n");
    return;
}

int main(){
    char nome[100];
    char nomes[N][100];
    for(int i=0; i<N; i++){
        scanf("%s", nomes[i]);
    }
    scanf("%s", nome);
    pesquisar(nome, nomes);
    return 0;
}