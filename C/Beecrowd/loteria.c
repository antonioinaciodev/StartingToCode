#include <stdio.h>

int main(){
    int escolhidos[6];
    int sorteados[6];
    int ddsorteados[6];
    int i, j, acerto=0;

    for(i=0; i<6; i++){
        scanf("%d", &escolhidos[i]);
    }
    for(i=0; i<6; i++){
        scanf("%d", &ddsorteados[i]);
    }
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(escolhidos[i] == sorteados[j]){
                acerto++;
                break;
            }
        }
    }
    switch(acerto){
        case 1:
            printf("azar\n");
            break;
        case 2:
            printf("azar\n");
            break;
        case 3:
            printf("terno\n");
            break;
        case 4:
            printf("quadra\n");
            break;
        case 5:
            printf("quina\n");
            break;
        case 6:
            printf("sena\n");
            break;
    }
    return 0;
}