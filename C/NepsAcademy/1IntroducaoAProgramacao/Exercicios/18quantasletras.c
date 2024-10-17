#include <stdio.h>
#include <string.h>

int main()
{
    int i, rep = 0, TAM = 50;
    char str[TAM];
    char str2[2];

    scanf("%s", str);
    scanf("%s", str2);
    for (i = 0; i <= TAM; i++)
    {
        if (str[0] == str2[i])
        {
            rep++;
        }
    }
    printf("%d", rep - 1);
    return 0;
}