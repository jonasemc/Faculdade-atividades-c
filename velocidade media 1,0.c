#include<stdlib.h>
  
//Váriaveis

float s, t; //váriaveis de aceleração e tempo

//Entrada

float main()
{
    printf("\nDigite a distância\n:"); // solicita a informação do usúario
    scanf("%d", &s); //armazena a informação

    printf("\nDigite o tempo\n:");
    scanf("%d", &t);

//Processamento
    float div = s/t;

//Saída 
    printf("\nA velocidade média é:%.3f", div);

    return 0;
}
