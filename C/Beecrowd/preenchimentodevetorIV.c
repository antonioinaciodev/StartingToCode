#include <stdio.h>

int main()
{
    int par[5];
    int impar[5];
    int i, x, j, cont1 = 0, cont2 = 0;

    for (i = 1; i <= 15; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            par[cont1] = x;
            cont1++;
            if (cont1 == 5)
            {
                for (j = 0; j < cont1; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                for (j = 0; j < cont1; j++)
                {
                    par[j] = 0;
                }
                cont1 = 0;
            }
        }
        else
        {
            impar[cont2] = x;
            cont2++;
            if (cont2 == 5)
            {
                for (j = 0; j < cont2; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                for (j = 0; j < cont2; j++)
                {
                    impar[j] = 0;
                }
                cont2 = 0;
            }
        }
    }
    for (i = 0; i < cont2; i++)
    {
        if (impar[i] != 0)
        {
            printf("impar[%d] = %d\n", i, impar[i]);
        }
    }
    for (i = 0; i < cont1; i++)
    {
        if (par[i] != 0)
        {
            printf("par[%d] = %d\n", i, par[i]);
        }
    }
    return 0;
}