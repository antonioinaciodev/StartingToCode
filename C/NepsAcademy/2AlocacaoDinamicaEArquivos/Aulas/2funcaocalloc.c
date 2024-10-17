#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1, *p2;
    p1 = (int*)malloc(sizeof(int)*3); //alocação com 1 parâmetro.
    p2 = (int*)calloc(3, sizeof(int)); //alocação com 2 parâmetros e preenchimento com 0.
    printf("%d %d %d\n%d %d %d", *p1, *p1+1, *p1+2, p2[0], p2[1], p2[2]); //teste de preenchimento.
    return 0;
}