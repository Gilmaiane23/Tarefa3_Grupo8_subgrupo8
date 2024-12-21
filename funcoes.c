#include <stdio.h>
#include "funcoes.h"

int segundo()
{
    int seg;
    printf("Digite os segundos: ");
    scanf("%d", &seg);
    return seg;
}

int minuto()
{
    int min;
    printf("Digite os minutos: ");
    scanf("%d", &min);
    return min;
}

int hora()
{
    int hora;
    printf("Digite as horas: ");
    scanf("%d", &hora);
    return hora;
}

void unidade_tempo()
{
    int numero;

    printf("Escolha uma opção:\n");
    printf("1 Para segundos\n");
    printf("2 Para minutos\n");
    printf("3 Para horas\n");
    scanf("%d", &numero);

    if (numero < 1 || numero > 3)
    {
        printf("Opção inválida!\n");
    }
    else if (numero == 1)
    {
        // Segundos
        int seg, minuto, hora;
        seg = segundo();
        minuto = seg / 60;
        hora = seg / 3600;
        printf("Tempo em segundos: %d\n", seg);
        printf("Tempo em minutos: %d\n", minuto);
        printf("Tempo em horas: %.d\n", hora);
    }
    else if (numero == 2)
    {
        // Minutos
        int segundo, min, hora;
        min = minuto();
        hora = min / 60;
        segundo = min * 60;
        printf("Tempo em segundos: %d\n", segundo);
        printf("Tempo em minutos: %d\n", min);
        printf("Tempo em horas: %.d\n", hora);
    }
    else if (numero == 3)
    {
        // Horas
        int segundo, minuto, horas;
        horas = hora();
        minuto = horas * 60;
        segundo = horas * 3600;
        printf("Tempo em segundos: %d\n", segundo);
        printf("Tempo em minutos: %d\n", minuto);
        printf("Tempo em horas: %d\n", horas);
    }
}

// 1 - Função de Conversão de Unidade de Volume
double obterFatorParaLitros(int unidade)
{
  switch (unidade)
  {
  case 1: // litro
    return 1.0;
  case 2:
    return 1.0 / 1000.0; // 1000 mL = 1 litro
  case 3:
    return 1000.0; // 1 m³ = 1000 litros
  default:
    return -1; // Unidade inválida
  }
}

int exibirSelecaoUnidade(const char *titulo)
{
  int escolha;
  printf("Selecione a unidade de %s:\n", titulo);
  printf("1 - Litro\n");
  printf("2 - Mililitro\n");
  printf("3 - Metro cubico\n");
  printf("Digite o numero correspondente: ");
  scanf("%d", &escolha);
  return escolha;
}

void converterVolume()
{
  int unidadeOrigem, unidadeDestino;
  double valor, fatorOrigem, fatorDestino, resultado;
  const char *unidades[] = {"", "litro", "mililitro", "metro cubico"};

  unidadeOrigem = exibirSelecaoUnidade("origem");
  fatorOrigem = obterFatorParaLitros(unidadeOrigem);
  if (fatorOrigem == -1)
  {
    printf("Unidade de origem invalida.\n");
    return;
  }

  unidadeDestino = exibirSelecaoUnidade("destino");
  fatorDestino = obterFatorParaLitros(unidadeDestino);
  if (fatorDestino == -1)
  {
    printf("Unidade de destino invalida.\n");
    return;
  }

  printf("Digite o valor a ser convertido: ");
  scanf("%lf", &valor);

  resultado = valor * fatorOrigem / fatorDestino;

  printf("%g %s equivale a %g %s\n",
         valor,
         unidades[unidadeOrigem],
         resultado,
         unidades[unidadeDestino]);
}

void menu(){
    printf("\n\n****************************************************************************************\n");
    printf("\t\t\tSuper conversor de unidades\n");
    printf("****************************************************************************************\n\n");
    printf("\t1 - Conversao de unidades de comprimento.\n");
    printf("\t2 - Conversao de unidades de massa.\n");
    printf("\t3 - Conversao de unidades de volume.\n");
    printf("\t4 - Conversao de unidades de temperatura.\n");
    printf("\t5 - Conversao de unidades de velocidade.\n");
    printf("\t6 - Conversao de unidades de energia.\n");
    printf("\t7 - Conversao de unidades de tempo.\n");
    printf("\nEscolha uma das opcoes acima:");
}

void converterMassa(){
  float valor, valorOriginal;
  int origem, destino;
  const char *unidades[] = {"", "quilograma", "grama", "tonelada"};
  
  
  printf("Escolha a unidade de origem:\n");
  printf("1 - Quilograma\n");
  printf("2 - Grama\n");
  printf("3 - Tonelada\n");
  printf("Sua escolha: ");
  scanf("%d", &origem);

  printf("Digite o valor que deseja converter: ");
  scanf("%f", &valor);
  valorOriginal=valor;
  
  printf("Escolha a unidade de destino:\n");
  printf("1 - Quilograma\n");
  printf("2 - Grama\n");
  printf("3 - Tonelada\n");
  printf("Sua escolha: ");
  scanf("%d", &destino);

  if (origem == 1) {

    switch (destino)
    {
    case 1:
      
      break;

    case 2:
      valor*=1000;
      break;

    case 3:
      valor/=1000;
      break;
    
    default:
      break;
    }
  }
    // Se a unidade de origem for Grama (2)
    if (origem == 2) {
      switch (destino)
      {
      case 1:
        valor/=1000;
        break;

      case 2:
        
        break;

      case 3:
        valor*=1000000;;
        break;
      
      default:
        break;
      }
    }
    
    // Se a unidade de origem for Tonelada (3)
    if (origem == 3) {
    
    switch (destino)
    {
      case 1:
        valor*=1000;
        break;

      case 2:
        valor*=1000000;
        break;

      case 3:
        
        break;
      
      default:
        break;
   }
  }
  printf("%g %s equivale a %g %s\n",
         valorOriginal,
         unidades[origem],
         valor,
         unidades[destino]);
}