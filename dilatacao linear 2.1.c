#include <stdio.h>

float calcularDilatacao(float comprimentoinicial, float coeficientedilatacao, float temperatura)
{
    float dilatacao = comprimentoinicial * coeficientedilatacao * temperatura;
    return dilatacao;
}

void calcularDilatacaoSolicitandoInformacoesDoUsuario(void)
{
    float d, lo, a, vt;
    
    printf("\nDigite o comprimento inicial :");
    scanf ("%f", &lo);

    printf("\nDigite o coeficiente de dilatacao linear :");
    scanf("%f", &a);

    printf("\nDigite a variacao de temperatura :");
    scanf("%f", &vt);

    d =  calcularDilatacao(lo,a,vt);

    printf("\nA variacao de comprimento e: %3.f", d);
}

int main (void)
{
    printf("\nA variacao de comprimento e: %3.f", calcularDilatacao(10, 10, 10));
    calcularDilatacaoSolicitandoInformacoesDoUsuario();
    return 0;
}