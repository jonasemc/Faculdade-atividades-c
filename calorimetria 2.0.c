#include <stdio.h>
//QUANTIDADE DE CALOR
//VARIAVEIS

float m, c, vt;

//ENTRADA

float main ()
{
    printf("/nDigite a massa do corpo :");
    scanf ("%f", &m);

    printf("\nDigite o calor especifico :");
    scanf("%f", &c);

    printf("\nDigite a variacao de temperatura :");
    scanf("%f", &vt);

//PROCESSAMENTO

    float mult = m*c*vt;

//SAIDA
    printf("\nA quantidade de calor e: %3.fJ", mult);

    return 0;
}

