#include<stdlib.h>
  
//Váriaveis

float m, c; 

//Entrada

float main()
{
    printf("\nDigite a massa\n:"); // solicita a informação do usúario
    scanf("%f", &m); //armazena a informação

    printf("\nDigite a velocidade da luz\n:");
    scanf("%f", &c);

//Processamento
    float mult = (c*c)*(m);

//Saída 
    printf("\nA energia é:%.3f", mult);

    return 0;
}

