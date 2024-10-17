#include <stdio.h>

void verificar(int b, int c){
    int sum;
    sum = b+c;
    if(sum % 2 == 0){
        printf("Bino\n");
    } else {
        printf("Cino\n");
    }
}

int main() {
    int b,c;
    scanf("%d%d", &b, &c);
    verificar(b,c);
    return 0;
}