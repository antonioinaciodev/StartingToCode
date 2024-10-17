#include <stdio.h>

int main()
{
    int l, c;
    int i, j;
    int cont = 0;
    int sempregol = 0;

    scanf("%d %d", &l, &c);
    int jogadorpartida[l][c];
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &jogadorpartida[i][j]);
        }
    }
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            if(jogadorpartida[i][j] != 0){
                cont++;
            }
        }
        if(cont >= c){
                sempregol++;
                cont = 0;
            } else {
                cont = 0;
            }
    }
    printf("%d\n", sempregol);
    return 0;
}