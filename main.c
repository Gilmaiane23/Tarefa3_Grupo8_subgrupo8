#include <stdio.h>
#include <stdlib.h>

// As funções não estavam exportando corretamente com funcoes.h
#include "funcoes.c"

int main()
{
  int op=-1;
  while (op!=0)
  {
    menu();
    scanf("%d",&op);
    system("clear || cls");
    switch (op)
    {
      case 1: //Comprimento
        
        break;

      case 2: //Massa
        converterMassa();
        break;
      
      case 3: //Volume
        converterVolume();
        break;

       case 4: //Temperatura
        
        break;


     case 5: //Velocidade
      convertvelocidade();
      break;

      case 6: //Energia
        converterEnergia();
        break;

      case 7: //Tempo
        unidade_tempo();
        break;

      case 0:
        printf("\nObrigado por utilizar o programa :)\nPressione qualquer tecla para sair: \n");
        scanf("%*c");
        scanf("%*c");
        break;
      
      default:
        printf("\nEssa opcao nao existe.\nPressione qualquer tecla para continuar: \n");
        scanf("%*c");
        scanf("%*c");
        break;
    }
    system("clear || cls");
  }
  
  return 0;
}
