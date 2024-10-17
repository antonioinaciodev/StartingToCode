#include <stdio.h>
#include <stdlib.h>

int main(){
    char *p; //ponteiro da variável
    p = (char*)malloc(sizeof(char)*2); //allocação de memória
    p[0] = 'c';
    p[1] = 'u';
    printf("%c%c\n", p[0], p[1]);
    free(p); //desalocação de memória
    return 0;
}