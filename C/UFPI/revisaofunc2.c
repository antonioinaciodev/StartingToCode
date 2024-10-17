#include <stdio.h>

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
    return;
}

int main(){
    int x,y;
    printf("Digite dois números: ");
    scanf("%d%d", &x, &y);
    troca(&x,&y);
    printf("%d %d", x, y);
    return 0;
}