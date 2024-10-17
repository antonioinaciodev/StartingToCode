#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
    double r, volume, PI;

    scanf("%lf", &r);
    volume = (4.0/3.0) * PI * pow(r,3);
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}