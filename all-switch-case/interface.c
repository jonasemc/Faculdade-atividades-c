#include <stdio.h>
#include "funcoes.h"
#include <math.h>
#include <locale.h>

void calcularQuantidadeDeCalorSolicitandoInformacoesDoUsuario(void)
{
    float q, m, c, vt;

    printf("\nDigite a massa do corpo(kg) :");
    scanf ("%f", &m);

    printf("\nDigite o calor específico(c) :");
    scanf("%f", &c);
 
    printf("\nDigite a variação de temperatura(°C) :");
    scanf("%f", &vt);

    q = calcularQuantidadeDeCalor(m,c,vt);

    printf("\nA quantidade de calor é: %3.fJ", q);

}

void calcularDilatacaoSolicitandoInformacoesDoUsuario(void)
{
    float d, lo, a, vt;
    
    printf("\nDigite o comprimento inicial :");
    scanf ("%f", &lo);

    printf("\nDigite o coeficiente de dilatação linear :");
    scanf("%f", &a);

    printf("\nDigite a variação de temperatura :");
    scanf("%f", &vt);

    d =  calcularDilatacao(lo,a,vt);

    printf("\nA variação de comprimento é: %3.f", d);
}

void calcularEmpuxoSolicitandoInformacoesDoUsuario(void)
{
    float e, d, v, g;

    printf("\nDigite a densidade :");
    scanf ("%f", &d);

    printf("\nDigite o volume deslocado :");
    scanf("%f", &v);

    printf("\nDigite a aceleracao da gravidade :");
    scanf("%f", &g);

    e = calcularEmpuxo(d,v,g);

    printf("\nO empuxo e: %3.f", e);

}

void calcularEnergiaSolicitandoInformacoesDoUsuario(void)
{
    float e, m, c; 
    
    printf("\nDigite a massa:"); 
    scanf("%f", &m); 

    printf("\nDigite a velocidade da luz:");
    scanf("%f", &c);
    
    e = calcularEnergia(m,c);
   
    printf("\nA energia é :%.3f", e);

}

void calcularForcaSolicitandoInformacoesDoUsuario(void)
{
    float f, m, a;

    printf("\nDigite a massa :");
    scanf("%f", &m);

    printf("\nDigite a aceleracao :");
    scanf("%f", &a);

    f = calcularForca(m,a);

    printf("\nA forca e: %2.f N", f);
    
}

void calcularPotenciaSolicitandoInformacoesDoUsuario(void)
{
    float p, u, i;

    printf("\nDigite a diferença de potencial\n:"); 
    scanf("%f", &u);

    printf("\nDigite a intensidade de corrente elétrica\n:");
    scanf("%f", &i);

    p = calcularPotencia(u,i);

    printf("\nA Potência dissipada é:%.3f", p);

}

void calcularMRUSolicitandoInformacoesDoUsuario(void)
{
    float m, so, v, t;

    printf("\nDigite o espaco inicial :");
    scanf ("%f", &so);

    printf("\nDigite a velocidade :");
    scanf("%f", &v);

    printf("\nDigite o tempo :");
    scanf("%f", &t);

    m = calcularMRU(so,v,t);

    printf("\nO espaco final e: %3.f J", m);

}

void calcularTempoSolicitandoInformacoesDoUsuario(void)
{
    float t, s, vm; 

    printf("\nDigite a distância\n:"); 
    scanf("%f", &s); 
    printf("\nDigite a velocidade media\n:");
    scanf("%f", &vm);

    t = calcularTempo(s,vm);
    
    printf("\nO tempo é:%.3f", t);
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

void calcularVelociadeMediaSolicitandoInformacoesDoUsuario(void)
{
    float vm, s, t; 

    printf("\nDigite a distância\n:"); 
    scanf("%f", &s); 

    printf("\nDigite o tempo\n:");
    scanf("%f", &t);

    vm = calcularVelocidadeMedia(s,t);

    printf("\nA velocidade média é:%.3f", vm);

}   

void DescubraSigno(void)
{
    float num;

    printf("Digite o numero correspondente ao seu mes de nascimento:\n\n");
    printf("1 - Janeiro\n");
    printf("2 - Fevereiro\n");
    printf("3 - Marco\n");
    printf("4 - Abril\n");
    printf("5 - Maio\n");
    printf("6 - Junho\n");
    printf("7 - Julho\n");
    printf("8 - Agosto\n");
    printf("9 - Setembro\n");
    printf("10 - Outubro\n");
    printf("11 - Novembro\n");
    printf("12 - Dezembro\n");
    scanf("%f",&num);

    if (num == 1){
      printf("Capricornio");
    } else if (num == 2){
      printf("Aquario");
    } else if (num == 3){
      printf("Peixes");
    } else if (num == 4){
      printf("Aries");
    } else if (num == 5){
      printf("Touro");
    } else if (num== 6){
      printf("Gemeos");
    } else if (num== 7){
      printf("Cancer");
    } else if (num== 8){
      printf("Leao");  
    } else if (num== 9){
      printf("Virgem");  
    } else if (num== 10){
      printf("Libra");  
    } else if (num== 11){
      printf("Escorpiao");  
    } else if (num== 12){
      printf("Sargitario");
      }else{
        printf("valor invalido");
      }
}

void DescubraSec(void)
{
    float num;

    printf("Digite o ano :\n\n");
    scanf("%f",&num);

    if (num >= 1 && num <= 100){
      printf("Este ano pertence ao SEC I");
    } else if (num >= 101 && num <= 200){
      printf("Este ano pertence ao SEC II");
    } else if (num >= 201 && num <= 300){
      printf("Este ano pertence ao SEC III");  
    } else if (num >= 301 && num <= 400){
      printf("Este ano pertence ao SEC IV");
    } else if (num >= 401 && num <= 500){
      printf("Este ano pertence ao SEC V");
    } else if (num >= 501 && num <= 600){
      printf("Este ano pertence ao SEC VI");
    } else if (num >= 601 && num <= 700){
      printf("Este ano pertence ao SEC VII");
    } else if (num >= 701 && num <= 800){
      printf("Este ano pertence ao SEC VIII");
    } else if (num >= 801 && num <= 900){
      printf("Este ano pertence ao SEC IX");
    } else if (num >= 901 && num <= 1000){
      printf("Este ano pertence ao SEC X");
    } else if (num >= 1001 && num <= 1100){
      printf("Este ano pertence ao SEC XI");
    } else if (num >= 1101 && num <= 1200){
      printf("Este ano pertence ao SEC XII");
    } else if (num >= 1201 && num <= 1300){
      printf("Este ano pertence ao SEC XIII");
    } else if (num >= 1301 && num <= 1400){
      printf("Este ano pertence ao SEC XIV");
    } else if (num >= 1401 && num <= 1500){
      printf("Este ano pertence ao SEC XV");
    } else if (num >= 1501 && num <= 1600){
      printf("Este ano pertence ao SEC XVI");
    } else if (num >= 1601 && num <= 1700){
      printf("Este ano pertence ao SEC XVII");
    } else if (num >= 1701 && num <= 1800){
      printf("Este ano pertence ao SEC XVIII");
    } else if (num >= 1801 && num <= 1900){
      printf("Este ano pertence ao SEC XIX");
    } else if (num >= 1901 && num <= 2000){
      printf("Este ano pertence ao SEC XX");
    } else if (num >= 2001 && num <= 2100){
      printf("Este ano pertence ao SEC XXI");
      }else {
        printf("valor invalido");
      }
}

void DescubraCNH(void)
{
    float num;

    printf("Digite quantos pontos voce possui :\n\n");
    scanf("%f",&num);

    if (num >= 0 && num < 20){
      printf("Sua CNH ainda esta regular");
    } else if (num >=20 ){
      printf("Sua CNH esta suspensa");
    } else {
      printf("valor invalido");
    }
   
}

void bartender(void)
{
    float num;

    printf("Bem vindo ao Bar do IF \n\n");
    printf("Digite sua idade :\n\n");
    scanf("%f",&num);


    if (num >= 0 && num < 18){
      printf("Você é muito novo para beber, tome um suquinho");
    } else if (num >=18 ){
      printf("Entao voce é o senhor adultinho, hein? // Beba a vontade rs");
    } else {
      printf("valor invalido");
    }
   
}

void compare(void)
{
    float a, b;

    printf("Compare Números \n\n");
    printf("Digite o número a :\n\n");
    scanf("%f",&a);
    printf("Digite o número b :\n\n");
    scanf("%f",&b);

    if (a > b){
      printf("(a) é maior que (b)");
    } else if (a == b ){
      printf("(a) é igual a (b)");
    } else if (a < b ){
      printf("(a) é menor que (b)");
    }else 
    {
      printf("valor invalido");
    }
   
}