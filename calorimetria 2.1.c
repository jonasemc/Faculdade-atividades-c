#include <stdio.h>

float calcularQuantidadeDeCalor(float massa, float calorespecifico, float temperatura)
{
    float quantidadedecalor = massa * calorespecifico * temperatura;
    return quantidadedecalor;
}

void calcularQuantidadeDeCalorSolicitandoInformacoesDoUusuario(void)
{
    float q, m, c, vt;

    printf("\nDigite a massa do corpo :");
    scanf ("%f", &m);

    printf("\nDigite o calor especifico :");
    scanf("%f", &c);

    printf("\nDigite a variacao de temperatura :");
    scanf("%f", &vt);

    q = calcularQuantidadeDeCalor(m,c,vt);

    printf("\nA quantidade de calor e: %3.fJ", q);

}

int main (void)
{
    printf("\nA quantidade de calor e: %3.fJ", calcularQuantidadeDeCalor(50, 50.5, 30));

    calcularQuantidadeDeCalorSolicitandoInformacoesDoUusuario();

    return 0;

}