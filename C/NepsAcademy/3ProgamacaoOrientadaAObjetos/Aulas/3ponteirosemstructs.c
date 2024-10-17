#include <stdio.h>

//definição de um novo tipo
typedef struct{
    int x;
    int y;
}Par;

//função de teste para ponteiros
void teste(Par *p){
    //acessando dentro do endereço da variável em 'x' e 'y'
    p->x = 2;
    p->y = 3;
}

int main(){
    Par x;
    //passando o endereço de memória da variável 'x' do tipo 'Par'
    teste(&x);
    printf("%d %d\n", x.x, x.y);

    return 0;
}