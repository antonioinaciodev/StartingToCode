#include <stdio.h>

typedef struct ponto {
    int x;
    int y;
} tPonto;

int main() {
    tPonto p;
    do {
        scanf("%d%d", &p.x, &p.y);
        if (p.y == 0 && p.x != 0) {
            printf("Eixo X\n");
        } else if (p.x == 0 && p.y != 0) {
            printf("Eixo Y\n");
        } else if (p.x > 0 && p.y > 0) {
            printf("Quadrante 1\n");
        } else if (p.x < 0 && p.y < 0) {
            printf("Quadrante 3\n");
        } else if (p.x > 0 && p.y < 0) {
            printf("Quadrante 4\n");
        } else if (p.x < 0 && p.y > 0) {
            printf("Quadrante 2\n");
        }
    } while(p.x != 0 || p.y != 0);
    printf("finalizado!");

    return 0;
}