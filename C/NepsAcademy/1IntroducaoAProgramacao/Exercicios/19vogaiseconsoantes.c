#include <stdio.h>
#include <string.h>

int main()
{
    char S[51];
    char vogais[51] = "";
    char consoantes[51] = "";

    scanf("%s", S);
    for (int i = 0; S[i] != '\0'; i++)
    {
        char letra = S[i];
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            strncat(vogais, &letra, 1);
        }
        else
        {
            strncat(consoantes, &letra, 1);
        }
    }
    printf("Vogais: %s\n", vogais);
    printf("Consoantes: %s\n", consoantes);
    return 0;
}
