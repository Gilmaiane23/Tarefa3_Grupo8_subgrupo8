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
void converterEnergia();

// 5 - Funções de Conversão de Unidade de Velocidade
float kmh_ms(float v);
float kmh_mph(float v);
float ms_kmh(float v);
float ms_mph(float v);
float mph_kmh(float v);
float mph_ms(float v);
void convertVelocidade();

#endif