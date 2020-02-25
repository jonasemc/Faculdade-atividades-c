#include <stdio.h>
float calcularTrabalho(float forca, float deslocamento, float angulo)
{
    float trabalho = forca * deslocamento * angulo;
    return trabalho;
}

void calcularTrabalhoSolicitandoInformacoesDoUsuario(void)
{
    float t, f, d, o;

    printf("\nDigite a forca escalar resultante :");
    scanf ("%f", &f);

    printf("\nDigite o deslocamento :");
    scanf("%f", &d);

    printf("\ncoseno do angulo formado com a horizontal :");
    scanf("%f", &o);

    t = calcularTrabalho(f,d,o);

    printf("\nO trabalho e: %3.f ", t);

}
int main (void)
{
    printf("\nO trabalho e: %3.f ", calcularTrabalho(10, 10, 10));
    calcularTrabalhoSolicitandoInformacoesDoUsuario();
    return 0;

}