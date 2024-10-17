#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, rep, i;
    scanf("%d", &rep);
    p = (int*)malloc(sizeof(int)); //alocação
    p = (int*)realloc(p, sizeof(int)*rep); //realocação
    for(i=0; i<rep; i++){
        p[i] = i;
    } //preenchimento
    for(i=0; i<rep; i++){
        printf("%d", p[i]);
    } //impressão
    return 0;
}