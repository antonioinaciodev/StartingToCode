#include <stdio.h>
#include <stdlib.h>

int main(){
    //Não verificar a alocação
    int *p = (int*)malloc(2147483647);

    if(p != NULL){
        printf("A alocacao foi realizada!\n");
    }
    else{
        printf("A alocacao nao foi realizada!\n");
    }

    free(p);
    //não desalocar memória alocada
    int *ptr = (int*)calloc(10, sizeof(int));

/*
...
*/

    free(ptr);
    //Utilizar ponteiros após desalocação
    int *ptr = (int*)calloc(10, sizeof(int));

/*
...
*/

    free(ptr);
    printf("%d", ptr[0]);
    //Esquecer o '\0' ao alocar strings
    char *ptr = (char*)calloc(10, sizeof(char));
    strcpy(p, "abcdefghij") //10 letras, faltando o espaço do /0
}