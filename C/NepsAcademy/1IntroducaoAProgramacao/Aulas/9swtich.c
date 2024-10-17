#include <stdio.h>
int main()
{
    int id;
    //
    printf("Escolha uma opção: ");
    scanf("%i", &id);
    switch(id)
    {
    case 1:
        printf("papel\n");
        break;
    case 2:
        printf("tesoura\n");
        break;
    case 3:
        printf("cola\n");
        break;
    case 4:
        printf("caneta\n");
        break;
    default:
        printf("opção não disponível");

        return 0;
    }
    /*
    if(id==1)
    printf("papel\n");
    if(id==2)
    printf("tesoura\n");
    if(id==3)
    printf("cola\n");
    if(id==4)
    printf("caneta\n");
    */
}