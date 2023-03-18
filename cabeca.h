// apenas os "protótipos" das funções
#include "corpo.c"
#ifndef cabeca_h
#define cabeca_h

double** leitura_txt(int *li, int *col, double **matriz);
void imprime(int *linhas, int *colunas, double **matriz);
void crescente();
void decrescente(int *linhas, int *colunas, double **matriz);
void maior();
void menor();
void repetidos();
void sair();

#endif