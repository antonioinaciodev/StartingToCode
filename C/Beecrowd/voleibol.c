#include <stdio.h>

int main(){
    int n;
    int i, j;
    double soma0=0,soma1=0,soma2=0,soma3=0,soma4=0,soma5=0;
    double media1, media2, media3;
    char nome[51];
    int jogadores[100][100];

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s", &nome[n]);
        for(j=0; j<6; j++){
            scanf("%d", &jogadores[i][j]);
        }
    }
    for(i=0; i<n; i++){
        soma0 += jogadores[i][0];
    }
    for(i=0; i<n; i++){
        soma1 += jogadores[i][1];
    }
    for(i=0; i<n; i++){
        soma2 += jogadores[i][2];
    }
     for(i=0; i<n; i++){
        soma3 += jogadores[i][3];
    }
    for(i=0; i<n; i++){
        soma4 += jogadores[i][4];
    }
    for(i=0; i<n; i++){
        soma5 += jogadores[i][5];
    }
    media1 = (soma3/soma0)*100;
    media2 = (soma4/soma1)*100;
    media3 = (soma5/soma2)*100;

    printf("Pontos de Saque: %.2lf %%.\n", media1);
    printf("Pontos de Bloqueio: %.2lf %%.\n", media2);
    printf("Pontos de Ataque: %.2lf %%.\n", media3);
    return 0;
}