#include <stdio.h>
int main()
{
    int segs, horas, minutos, segundos;

    scanf("%i", &segs);
    horas = segs/3600;
    minutos = (segs%3600)/60;
    segundos = ((segs%3600)%60)/1;
    printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}