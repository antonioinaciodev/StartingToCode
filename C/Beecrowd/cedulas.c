#include <stdio.h>
int main()
{
    int x;
    int nota1, nota2, nota5, nota10, nota20, nota50, nota100;

    scanf("%i", &x);
    nota100 = x/100;
    nota50 = (x%100)/50;
    nota20 = ((x%100)%50)/20;
    nota10 = (((x%100)%50)%20)/10;
    nota5 = ((((x%100)%50)%20)%10)/5;
    nota2 = (((((x%100)%50)%20)%10)%5)/2;
    nota1 = ((((((x%100)%50)%20)%10)%5)%2)/1;

    printf("%i\n", x);

    printf("%i nota(s) de R$ 100,00\n", nota100);
    printf("%i nota(s) de R$ 50,00\n", nota50);
    printf("%i nota(s) de R$ 20,00\n", nota20);
    printf("%i nota(s) de R$ 10,00\n", nota10);
    printf("%i nota(s) de R$ 5,00\n", nota5);
    printf("%i nota(s) de R$ 2,00\n", nota2);
    printf("%i nota(s) de R$ 1,00\n", nota1);

    return 0;
}