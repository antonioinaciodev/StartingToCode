#include <stdio.h>
int main()
{
    int x;

    printf("Digite um valor para verificar paridade e maior que 6: ");
    scanf("%i", &x);
    if(x%2==0 && x>6)
    {printf("Par e maior que 6");}
    else
    {printf("Não é par e maior que 6");}
}