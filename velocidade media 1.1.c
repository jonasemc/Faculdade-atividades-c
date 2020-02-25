#include<stdlib.h>
  
float calcularVelocidadeMedia(float distancia, float tempo)
{
    float velocidadeMedia = distancia / tempo;
    return velocidadeMedia;
}

void calcularVelociadeMediaSolicitandoInformacoesDoUsuario(void)
{
    float vm, s, t; 

    printf("\nDigite a distância\n:"); // solicita a informação do usúario
    scanf("%d", &s); //armazena a informação

    printf("\nDigite o tempo\n:");
    scanf("%d", &t);

    vm = calcularVelocidadeMedia(s,t);

    printf("\nA velocidade média é:%.3f", vm);

}   
int main (void)
{
    printf("\nA velocidade média é:%.3f", calcularVelocidadeMedia(10, 10));

    calcularVelociadeMediaSolicitandoInformacoesDoUsuario();

    return 0;

}