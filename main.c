#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#include <locale.h>

int main()
{
    int op = -1;

    // Loop principal até o usuário optar por sair
    while (op != 0)
    {
        menu();  // Exibe o menu
        scanf("%d", &op);
        
        switch (op)
        {
            case 1: // Conversão de Comprimento
                converterComprimento();
                break;

            case 2: // Conversão de Massa
                converterMassa(); 
                break;

            case 3: // Conversão de Volume
                converterVolume();
                break;

            case 4: // Conversão de Temperatura
                converterTemperatura();
                break;

            case 5: // Conversão de Velocidade
                convertVelocidade();
                break;

            case 6: // Conversão de Energia
                converterEnergia();
                break;

            case 7: // Conversão de Tempo
                converterArea();
                break;

            case 8: // Conversão de Tempo
                unidade_tempo();
                break;

            case 0:
                // Mensagem de despedida
                printf("\nObrigado por utilizar o programa :)\nPressione ENTER para sair: \n");
                scanf("%*c");  // Limpa o buffer
                scanf("%*c");  // Espera o usuário pressionar uma tecla
                break;

            default:
                // Caso o usuário insira uma opção inválida
                printf("\nEssa opção não existe.\nPressione qualquer tecla para continuar: \n");
                scanf("%*c");  // Limpa o buffer
                scanf("%*c");  // Espera o usuário pressionar uma tecla
                break;
        }
    }
    return 0;
}
