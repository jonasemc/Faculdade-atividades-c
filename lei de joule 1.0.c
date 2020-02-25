#include<stdlib.h>
// Lei de joule
//Váriaveis

float u, i;

//Entrada

float main()
{
    printf("\nDigite a diferença de potencial\n:"); // solicita a informação do usúario
    scanf("%f", &u); //armazena a informação

    printf("\nDigite a intensidade de corrente elétrica\n:");
    scanf("%f", &i);

//Processamento
    float mult = u*i;

//Saída 
    printf("\nA Potência dissipada é:%.3f", mult);

    return 0;
}