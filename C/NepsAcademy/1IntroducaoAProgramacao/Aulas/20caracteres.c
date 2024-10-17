#include <stdio.h>

int main()
{
    char c;
    //scanf("%c", &c)

    c = getchar();
    
    if (c == 'a')
    {
        printf("c = a\n");
    }
    else
    {
        printf("c != a\n");
    }
    printf("%d - %c\n", c, c);
    return 0;
}