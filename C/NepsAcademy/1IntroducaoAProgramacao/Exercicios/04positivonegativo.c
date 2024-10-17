#include <stdio.h>
int main()
{
	int x;
    
	scanf("%i", &x);
    if(x>0)
    {printf("positivo\n");}
    if(x<0)
    {printf("negativo\n");}
    if(x==0)
    {printf("nulo\n");}
    
    return 0;
}