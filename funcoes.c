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