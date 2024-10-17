#include <stdio.h>

int main() {
    int i, x, vezes = 0;
    int vetor[10];
    int vetor2[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < 10; i++) {
        if (x == vetor[i]) {
            vetor2[vezes] = i;
            vezes++;
        }
    }

    if (vezes == 0) {
        printf("Mia x\n");
    } else {
        printf("%d\n", vezes);
        for (i = 0; i < vezes; i++) {
            printf("%d ", vetor2[i]);
        }
        printf("\n");
    }

    return 0;
}