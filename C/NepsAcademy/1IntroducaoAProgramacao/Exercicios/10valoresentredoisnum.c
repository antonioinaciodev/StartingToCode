#include <stdio.h>
int main()
{
    int x, y;

    scanf("%i%i", &x, &y);
    if(y<x)
    {
        while(y<=x)
        {
            printf("%i ", y);
            y++;
        }
    }
    else
    {
        while(x<=y)
        {
            printf("%i ", x);
            x++;
        }
    }
}