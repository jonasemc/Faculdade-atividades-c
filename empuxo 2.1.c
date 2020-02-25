#include <stdio.h>

float calcularEmpuxo(float densidade, float volume, float gravidade)
{
    float empuxo = densidade * volume * gravidade;
    return empuxo;
}

void calcularEmpuxoSolicitandoInformacoesDoUsuario(void)
{
    float e, d, v, g;

    printf("\nDigite a densidade :");
    scanf ("%f", &d);

    printf("\nDigite o volume deslocado :");
    scanf("%f", &v);

    printf("\nDigite a aceleracao da gravidade :");
    scanf("%f", &g);

    e = calcularEmpuxo(d,v,g);

    printf("\nO empuxo e: %3.f", e);

}

int main (void)
{
    printf("\nO empuxo e: %3.f", calcularEmpuxo(10, 10, 10));
    calcularEmpuxoSolicitandoInformacoesDoUsuario();
    return 0;

}