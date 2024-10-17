#include <stdio.h>

int main()
{
    int x, maior;
    maior = 0;
    while(x!=0)
    {
        scanf("%i", &x);
        if(x>maior)
        {
            maior = x;
        }
    }
    printf("%i\n", maior);

    return 0;
}