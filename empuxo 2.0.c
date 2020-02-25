#include <stdio.h>
//EMPUXO
//VARIAVEIS

float d, v, g;

//ENTRADA

float main ()
{
    printf("/nDigite a densidade :");
    scanf ("%f", &d);

    printf("\nDigite o volume deslocado :");
    scanf("%f", &v);

    printf("\nDigite a aceleracao da gravidade :");
    scanf("%f", &g);

//PROCESSAMENTO

    float mult = d*v*g;

//SAIDA
    printf("\nO empuxo e: %3.f", mult);

    return 0;
}