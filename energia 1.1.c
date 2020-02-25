#include<stdlib.h>
  
float calcularEnergia(float massa, float velocidadedaluz)
{   //PROCESSAMENTO 
    float energia = massa * (velocidadedaluz*velocidadedaluz);
    //SAIDA 
    return energia;
}

void calcularEnergiaSolicitandoInformacoesDoUsuario(void)
{
    float e, m, c; 
    //ENTRADA
    printf("\nDigite a massa:"); // solicita a informação do usúario
    scanf("%f", &m); //armazena a informação

    printf("\nDigite a velocidade da luz:");
    scanf("%f", &c);
    //PROCESSAMENTO 
    e = calcularEnergia(m,c);
    //Saída 
    printf("\nA energia é :%.3f", e);

}

int main(void) 
{
    printf("\nA energia e :%.3f", calcularEnergia(30.5, 10.50));
    
    calcularEnergiaSolicitandoInformacoesDoUsuario();

    return 0;
}