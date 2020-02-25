#include <stdio.h>
//TRABALHO
//VARIAVEIS

float f, d, o;

//ENTRADA

float main ()
{
    printf("/nDigite a forca escalar resultante :");
    scanf ("%f", &f);

    printf("\nDigite o deslocamento :");
    scanf("%f", &d);

    printf("\ncoseno do angulo formado com a horizontal :");
    scanf("%f", &o);

//PROCESSAMENTO

    float mult = f*d*o;

//SAIDA
    printf("\nO trabalho e: %3.f ", mult);

    return 0;
}