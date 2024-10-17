#include <stdio.h>

int main(){
    FILE *arq;
    arq = fopen("arquivo.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir.\n");
    } else {
        printf("Exito ao abrir.\n");
    }
    //fputc('n', arq);
    //fputs("Swag é o drip\n", arq);
    //fprintf(arq, "Swag é %d\n", 7);
    fclose(arq);
    return 0;
}