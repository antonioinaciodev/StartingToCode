#include <stdio.h>

    //declaração de um novo tipo de variável (struct)
struct aluno{
    char nome[50];
    int idade;
};

int main(){
    //declaração de uma variável do tipo criado
    struct aluno x; //= {"Fulano", 20};
    scanf("%s%d", x.nome, &x.idade);
    printf("Nome: %s\n", x.nome);
    printf("Idade: %d\n", x.idade);

    return 0;
}