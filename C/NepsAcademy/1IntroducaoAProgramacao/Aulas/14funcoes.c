#include <stdio.h>

// função criada para soma
int soma(int a, int b){
    return a+b;
}

//função principal
int main(){
    int x = soma(2, 3);
    printf("%d\n", x);
    return 0;
}