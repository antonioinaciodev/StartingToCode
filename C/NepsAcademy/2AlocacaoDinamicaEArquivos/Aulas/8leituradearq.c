#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    arq = fopen("arquivo.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir.\n");
    } else {
        printf("Exito ao abrir.\n");
    }

    /*
    while(feof(arq) == 0){
        char c = fgetc(arq);
        printf("%c", c);
    }
    */

    /*
    while(feof(arq) == 0){
        char s[5];
        fgets(s, sizeof(s), arq);
        printf("%s\n", s);
    }
    */

    /*
    char s[20];
    int a,b,c;
    fscanf(arq, "%d%d%d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    */

    fclose(arq);
    return 0;
}