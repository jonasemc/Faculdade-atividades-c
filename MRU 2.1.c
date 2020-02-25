#include <stdio.h>

float calcularMRU(float espaco, float velocidade, float tempo)
{
    float MRU = espaco + (velocidade * tempo);
    return MRU;
}

void calcularMRUSolicitandoInformacoesDoUsuario(void)
{
    float m, so, v, t;

    printf("\nDigite o espaco inicial :");
    scanf ("%f", &so);

    printf("\nDigite a velocidade :");
    scanf("%f", &v);

    printf("\nDigite o tempo :");
    scanf("%f", &t);

    m = calcularMRU(so,v,t);

    printf("\nO espaco final e: %3.f J", m);

}
int main (void)
{
    printf("\nO espaco final e: %3.f J", calcularMRU(10, 10, 10));
    calcularMRUSolicitandoInformacoesDoUsuario();
    return 0;

}