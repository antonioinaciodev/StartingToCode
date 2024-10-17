#include <stdio.h>

int main() {
    int rep, i;
    int N1, N2, D1, D2, N3, D3;
    char barra, operacao;

    scanf("%d", &rep);

    for(i = 0; i < rep; i++){
        scanf("%d", &N1);
        scanf(" %c", &barra);
        scanf("%d", &D1);
        scanf(" %c", &operacao);
        scanf("%d", &N2);
        scanf(" %c", &barra);
        scanf("%d", &D2);

        switch(operacao){
        case '+':
            N3 = (N1*D2 + N2*D1);
            D3 = (D1*D2);
            break;
        case '-':
            N3 = (N1*D2 - N2*D1);
            D3 = (D1*D2);
            break;
        case '*':
            N3 = (N1*N2);
            D3 = (D1*D2);
            break;
        case '/':
            N3 = (N1*D2);
            D3 = (N2*D1);
            break;
        }
        printf("%d/%d\n", N3, D3);
    }

    return 0;
}