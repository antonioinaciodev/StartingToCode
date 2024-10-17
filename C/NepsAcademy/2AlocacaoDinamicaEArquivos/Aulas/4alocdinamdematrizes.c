#include <stdio.h>
#include <stdlib.h>

int main(){
    int **p;
    int N, M, i, j;
    
    printf("Linhas: ");
    scanf("%d", &N);
    printf("Colunas: ");
    scanf("%d", &M);

    p = (int**)malloc(sizeof(int*)*N);
    for(i=0; i<N; i++){
        p[i] = (int*)malloc(sizeof(int)*M);
    }
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            scanf("%d", &p[i][j]);
        }
    }
    printf("matriz:\n");
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<N; i++){
        free(p[i]);
    }
    free(p);
    return 0;
}