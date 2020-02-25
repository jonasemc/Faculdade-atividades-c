#include <stdio.h>
//MOVIMENTO RETILINEO UNIFORME
//VARIAVEIS

float so, v, t;

//ENTRADA

float main ()
{
    printf("/nDigite o espaco inicial :");
    scanf ("%f", &so);

    printf("\nDigite a velocidade :");
    scanf("%f", &v);

    printf("\nDigite o tempo :");
    scanf("%f", &t);

//PROCESSAMENTO

    float mru = so + (v*t);

//SAIDA
    printf("\nO espaco final e: %3.f J", mru);

    return 0;
}