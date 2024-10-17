#include <stdio.h>
int main()
{
    int n1, n2, media;
    
    scanf("%i%i", &n1, &n2);
    media = (n1*2+n2*3)/5;
    if(media>=7)
    {printf("Aprovado\n");}
    else
        if(media<3)
        {printf("Reprovado\n");}
        else
        {printf("Final\n");}

    return 0;
}