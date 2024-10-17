#include <stdio.h>

//Fazendo um recurso para calcular fatorial gerando um loop que chama a função dentro da função.
int fatorial(int n){
    if(n == 0){
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

int main (){
    int n, fat;
    scanf("%d", &n);
    fat = fatorial(n);
    printf("o fatorial de %d é %d", n, fat);
}