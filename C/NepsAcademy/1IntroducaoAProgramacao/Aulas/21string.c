#include <stdio.h>

int main()
{
    char n1[12];
    fgets(n1, sizeof(n1), stdin);
    printf("%s", n1);
    return 0;
}