#include <stdio.h>

float calcularForca(float massa, float aceleracao)
{       
    float forca = massa * aceleracao;
    return forca;
}

void calcularForcaSolicitandoInformacoesDoUsuario(void)
{
    float f, m, a;

    printf("\nDigite a massa :");
    scanf("%f", &m);

    printf("\nDigite a aceleracao :");
    scanf("%f", &a);

    f = calcularForca(m,a);

    printf("\nA forca e: %2.f N", f);
    
}

int main (void)
{
    printf("\nA forca e: %2.f N", calcularForca(30.5, 10.50));

    calcularForcaSolicitandoInformacoesDoUsuario();

    return 0;
}