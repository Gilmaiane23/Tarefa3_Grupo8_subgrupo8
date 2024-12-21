#ifndef FUNCOES_H
#define FUNCOES_H

void menu();

int segundo();
int minuto();
int hora();
void unidade_tempo();

// 1 - Função de Conversão de Unidade de Volume
double obterFatorParaLitros(int unidade);
int exibirSelecaoUnidade(const char *titulo);
void converterVolume();

void converterMassa();

#endif