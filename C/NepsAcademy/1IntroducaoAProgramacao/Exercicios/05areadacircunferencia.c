#include <stdio.h>
#include <math.h>
int main()
{
    float area, raio;
    
    scanf("%f", &raio);
    area = pow(raio, 2)*3.1416;
    printf("%.2f\n", area);
    
    return 0;
}