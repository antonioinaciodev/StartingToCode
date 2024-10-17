#include <stdio.h>

int main(){
    FILE *arq; //tipagem de arquivo
    arq = fopen("arquivo.txt", "w"); //função de abrir arquivo
    if(arq == NULL){
        printf("Erro ao abrir.\n");
    } else {
        printf("Exito ao abrir.\n");
    }
    fclose(arq); //fechar arquivo
    return 0;
}