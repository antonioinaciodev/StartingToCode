#include <stdio.h>
#define TAM 10

void insereRespostas(char *x) {
    scanf("%s", x); // Removido o operador "&" antes de x
}

void corrigeProva(char *x, char *y, int *res) {
    int i, correto = 0;
    for(i = 0; i < TAM; i++) {
        if(x[i] == y[i]) {
            correto++;
        }
    }
    *res = correto;
}

int main() {
    char respP[TAM]; // Respostas corretas da prova
    char respA[TAM]; // Respostas do aluno
    int res = 0; // Quantidade de questões corretas
    printf("Gabarito da Prova\n");
    insereRespostas(respP); // Removido o uso de [TAM]
    printf("Resposta do Aluno\n");
    insereRespostas(respA); // Removido o uso de [TAM]
    corrigeProva(respP, respA, &res);
    printf("%d questoes corretas\n", res);
    return 0;
}
