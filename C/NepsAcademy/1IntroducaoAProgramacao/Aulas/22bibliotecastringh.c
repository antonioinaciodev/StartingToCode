#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];
    scanf("%s", str1);

    //strlen: função que retorna o tamanho da string
    printf("%d\n", strlen(str1));

    // função que copia strings
    char str2[10];
    strcpy(str2, str1);
    printf("%s\n", str2);

    //strcmp: função para comparar strings
    // se str1 == str2: 0
    // se str1 < str2: -1
    // se str1 > str2: 1
    if (strcmp(str1, str2) == 0)
    {
        printf("iguais\n");
    }
    if (strcmp(str1, str2) == -1)
    {
        printf("str1 é menor\n");
    }
    if (strcmp(str1, str2) == 1)
    {
        printf("str1 é maior\n");
    }

    //strstr: função para imprimir uma str apartir de ponto
    printf("%s\n", strstr(str1, "b"));
    if (strstr(str1, "f") == NULL)
    {
        printf("Nao tem\n");
    }
    else
    {
        printf("Tem\n");
    }

    //strcat: função para concatenar strings
    strcat(str1, " ");
    strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}