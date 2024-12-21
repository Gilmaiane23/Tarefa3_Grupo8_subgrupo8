#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    int opcao, continuar;
    float temperatura, resultado;
    while (1) {
    printf("Escolha a conversão desejada:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Fahrenheit para Kelvin\n");
    printf("5 - Kelvin para Celsius\n");
    printf("6 - Kelvin para Fahrenheit\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // Conversão de Celsius para Fahrenheit
            printf("Digite a temperatura em Celsius:");
            scanf("%f", &temperatura);
            resultado = (temperatura * 9/5) + 32;
            printf("%.2f Celsius equivale a %.2f Fahrenheit.\n", temperatura, resultado);
            break;
        
        case 2:
            // Conversão de Celsius para kelvin
            printf("Digite a temperatura em Celsius:");
            scanf("%f", &temperatura);
            resultado = (temperatura + 273);
            printf("%.2f Celsius equivale a %.2f Kelvin.", temperatura, resultado);
            break;
         case 3:
            // Conversão de Fahrenheit para Celsius
            printf("Digite a temperatura em Fahrenheit:");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * 5/9;
            printf("%.2f Fahrenheit equivale a %.2f Celsius.", temperatura, resultado);
            break;
        
         case 4:
            // Conversão de Fahrenheit para Kelvin
            printf("Digite a temperatura em Fahrenheit:");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * (5/9) + 273;
            printf("%.2f Fahrenheit equivale a %.2f Kelvin.", temperatura, resultado);
            break;

         case 5:
            // Conversão de Kelvin para Celsius
            printf("Digite a temperatura em Kelvin:");
            scanf("%f", &temperatura);
            resultado = (temperatura - 273);
            printf("%.2f Kelvin equivale a %.2f Celsius.\n", temperatura, resultado);
            break;

         case 6:
            // Conversão de Kelvin para Fahrenheit
            printf("Digite a temperatura em Kelvin:");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * 5/9;
            printf("%.2f Kelvin equivale a %.2f Fahrenheit.\n", temperatura, resultado);
            break;
            
    
        default:
            printf("Opção inválida!\n");
            continue;
    }
    printf("\nDeseja:\n");
    printf("1 - Voltar para o menu\n");
    printf("2 - Sair\n");
    printf("Digite a opção: ");
    scanf("%d", &continuar);

        if (continuar == 2) {
            printf("Saindo...\n");
            break;
        }
    }

    return 0;
}