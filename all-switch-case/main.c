#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "funcoes.h"
#include "interface.h"


void solicitaOpcao()
{
    int opcao;
    printf("\n\nSelecione uma opção:\n\n");
    printf("0 - Sair\n");
    printf("1 - Quantidade de Calor\n");
    printf("2 - Dilatção linear\n");
    printf("3 - Empuxo\n");
    printf("4 - Energia\n");
    printf("5 - Força\n");
    printf("6 - Lei de Joule\n");
    printf("7 - MRU\n");
    printf("8 - Tempo\n");
    printf("9 - Trabalho\n");
    printf("10 - Velocidade Média\n");
    printf("11 - Descubra seu Signo\n");
    printf("12 - Descubra o Século (1 ao 21)\n");
    printf("13 - Descubra se sua carteira de motorista está suspensa\n");
    printf("14 - Bar Do IF\n");
    printf("15 - Compare Números\n");
    fflush(stdin);
    scanf("%d", &opcao);

    switch (opcao)
    {
      case 0: 
          exit(0);
           break;
      case 1:
          system("@cls||clear");
          calcularQuantidadeDeCalorSolicitandoInformacoesDoUsuario();
          break;
      case 2:
          system("@cls||clear");
          calcularDilatacaoSolicitandoInformacoesDoUsuario();
          break;    
      case 3:
          system("@cls||clear");
          calcularEmpuxoSolicitandoInformacoesDoUsuario();
          break;   
      case 4:
          system("@cls||clear");
         calcularEnergiaSolicitandoInformacoesDoUsuario();
          break;   
      case 5:
          system("@cls||clear");
          calcularForcaSolicitandoInformacoesDoUsuario();
          break;   
      case 6:
          system("@cls||clear");
          calcularPotenciaSolicitandoInformacoesDoUsuario();
          break;   
      case 7:
          system("@cls||clear");
          calcularMRUSolicitandoInformacoesDoUsuario();
          break;   
      case 8:
          system("@cls||clear");
          calcularTempoSolicitandoInformacoesDoUsuario();
          break;   
      case 9:
          system("@cls||clear");
          calcularTrabalhoSolicitandoInformacoesDoUsuario();
          break;   
      case 10:
          system("@cls||clear");
          calcularVelociadeMediaSolicitandoInformacoesDoUsuario();
          break;   
      case 11:
          system("@cls||clear");
          DescubraSigno();
          break;   
      case 12:
          system("@cls||clear");
          DescubraSec();
          break;   
      case 13:
          system("@cls||clear");
          DescubraCNH();
          break;    
      case 14:
          system("@cls||clear");
          bartender();
          break;   
      case 15:
          system("@cls||clear");
          compare();
          break;                                                  
      default:
          system("@cls||clear");
          printf("\nOpção não reconhecida. Tente novamente\n\n");
          solicitaOpcao();
          break;
    }
    
}

int main()
{   
    printf("\n\nPROGRAMINHA LEGAL\n");
    solicitaOpcao();
}
