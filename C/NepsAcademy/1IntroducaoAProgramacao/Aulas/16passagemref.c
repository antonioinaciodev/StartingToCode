#include <stdio.h>
/*
int troca(int a, int b){
    int aux = a;
    a = b;
    b = aux;
    printf("TROCA: %d %d\n", a ,b);
}

int main(){
    int a = 1;
    int b = 2;
    troca(a,b);
    printf("MAIN: %d %d\n", a, b);
    return 0;
}
*/
void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int a = 1;
    int b = 2;
    troca(&a,&b);
    printf("%d %d\n", a, b);
    return 0;
}