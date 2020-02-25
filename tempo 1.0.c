#include<stdlib.h>
  
//Váriaveis

float s, vm; 

//Entrada

float main()
{
    printf("\nDigite a distância\n:"); // solicita a informação do usúario
    scanf("%f", &s); //armazena a informação

    printf("\nDigite a velocidade media\n:");
    scanf("%f", &vm);

//Processamento
    float div = s/vm;

//Saída 
    printf("\nO tempo é:%.3f", div);

    return 0;
}