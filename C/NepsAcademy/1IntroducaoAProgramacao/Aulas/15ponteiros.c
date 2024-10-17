#include <stdio.h>

int main(){
    int x = 5;
    int *p;
    p = &x;
    printf("%d\n", *p);
    x = 7;
    printf("%d\n", *p);
    *p = 9;
    printf("%d\n", x);
    return 0;
}
//basicamente: para p* apontar para x, p tem que receber &x (endereço de mem. de x)