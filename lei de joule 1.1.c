#include<stdlib.h>

float calcularPotencia(float diferencadepotencial, float corrente)
{
    float potencia = diferencadepotencial * corrente;
    return potencia;
}

void calcularPotenciaSolicitandoInformacoesDoUsuario(void)
{
    float p, u, i;

    printf("\nDigite a diferença de potencial\n:"); // solicita a informação do usúario
    scanf("%f", &u); //armazena a informação

    printf("\nDigite a intensidade de corrente elétrica\n:");
    scanf("%f", &i);

    p = calcularPotencia(u,i);

    printf("\nA Potência dissipada é:%.3f", p);

}

int main (void)
{
    printf("\nA Potência dissipada é:%.3f", calcularPotencia(20, 10));

    calcularPotenciaSolicitandoInformacoesDoUsuario();

    return 0;
}