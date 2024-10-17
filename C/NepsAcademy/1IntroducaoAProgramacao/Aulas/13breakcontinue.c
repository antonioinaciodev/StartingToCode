#include<stdio.h>
int main()
{
    for(int i = 0; i < 6; i++)
    {
	    if(i == 2)
        {break;} /*ou continue para voltar ao lapso invés de executar o printf*/
	    printf("%d\n", i);
    }

    return 0;
}