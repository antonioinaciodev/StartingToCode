#include <stdio.h>

//declarar um novo tipo de variável e dar um sinônimo(tPar)
typedef struct par{
    int x;
    int y;
}tPar;

int main(){
    //ultilizar o sinônimo para definir o tipo da variável
    tPar x;
    scanf("%d%d", &x.x, &x.y);
    printf("%d", x.x + x.y);

    return 0;
}