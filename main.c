#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

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
      
      break;

    case 7: //Tempo
      unidade_tempo();
      break;

    case 0:
      printf("\nObrigado por utilizar o programa :)\n Pressione qualquer tecla para sair:");
      scanf("%*c");
      scanf("%*c");
      break;
    
    default:
      printf("\nEssa opcao nao existe.\n Pressione qualquer tecla para continuar: ");
      scanf("%*c");
      scanf("%*c");
      break;
    }
    printf("\nPressione qualquer tecla para continuar: ");
    scanf("%*c");
    scanf("%*c");
    system("clear || cls");
  }
  
  return 0;
}
