#include <stdio.h>
//DILATACAO LINEAR
//VARIAVEIS

float lo, a, vt;

//ENTRADA

float main ()
{
    printf("/nDigite o comprimento inicial :");
    scanf ("%f", &lo);

    printf("\nDigite o coeficiente de dilatacao linear :");
    scanf("%f", &a);

    printf("\nDigite a variacao de temperatura :");
    scanf("%f", &vt);

//PROCESSAMENTO

    float mult = lo*a*vt;

//SAIDA
    printf("\nA variacao de comprimento e: %3.f", mult);

    return 0;
}