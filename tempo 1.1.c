#include<stdlib.h>
  
float calcularTempo(float distancia, float velocidadeMedia)
{
    float tempo = distancia / velocidadeMedia;
    return tempo;
}

void calcularTempoSolicitandoInformacoesDoUsuario(void)
{
    float t, s, vm; 

    printf("\nDigite a distância\n:"); // solicita a informação do usúario
    scanf("%f", &s); //armazena a informação

    printf("\nDigite a velocidade media\n:");
    scanf("%f", &vm);

    t = calcularTempo(s,vm);
    
    printf("\nO tempo é:%.3f", t);
}

int main (void) 
{
    printf("\nO tempo é:%.3f", calcularTempo(10, 10));

    calcularTempoSolicitandoInformacoesDoUsuario();

    return 0;
}

