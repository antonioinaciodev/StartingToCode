#include <stdio.h>

int main()
{
    int crescente[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &crescente[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", crescente[9 - i]);
    }
    return 0;
}