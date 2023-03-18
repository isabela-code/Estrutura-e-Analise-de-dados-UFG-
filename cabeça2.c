// apenas os "protótipos" das funções

#include "corpo.c"

#ifndef corpo_H

#define corpo_H

void leitura_txt(int *linhas, int *colunas, float matriz[][20]);

void imprime(int *linhas, int *colunas, float matriz[][20]);

void crescente();

void decre(int *linhas, int *colunas, float matriz[][20]);

void maior();

void menor();

void repetidos();

void sair();



#endif