#include <stdio.h>
int main()
{
    int hi, mi, hf, mf, dh, dm, im, fm, dtm;

    scanf("%i %i %i %i", &hi, &mi, &hf, &mf);
    if(hi == mi && mi == hf && hf == mf && mf == hi)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
    {
    im = hi * 60 + mi;
    fm = hf * 60 + mf;
    dtm = (fm - im + 24 * 60) % (24 * 60);
    dh = dtm / 60;
    dm = dtm % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
    }

    return 0;
}