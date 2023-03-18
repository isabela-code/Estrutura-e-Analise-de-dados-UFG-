// arquivo *.c da Biblioteca
#include <stdlib.h>
#include <stdio.h>
#include <string.h> // utilizada na função leitura_txt()


double** leitura_txt(int *linhas, int *colunas, double **matriz)
{
  FILE *arq;
  char Nome[128];
  char Linha[100];
  char *result;
  int li , col;
  int i, j;

  // Entra com o nome (caminho) do ARQUIVO via TECLADO
  printf("\n\nNome do Arquivo .TXT sem a extensao:\n");
  scanf("%123s", Nome);
  strcat(Nome, ".txt");
  
  // Abre um arquivo TEXTO para LEITURA
  arq = fopen(Nome, "rt");
  if (arq == NULL) // se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }
  
  result = fscanf(arq,"%d%d", &li, &col);
  *linhas = li;
  *colunas = col;

  //alocação dinamica de memoria da matriz
  matriz = malloc(li*sizeof(double *));

  for (i = 0; i < li; i++) {
    matriz[i] = malloc(col*sizeof(double));
  }

  printf("\nArquivo: %s tem", Nome);
  printf("\n%d linhas e %d colunas\n", li, col);
 
  // Inicia os contadores
  i,j = 0;
  for (i = 0; i < li; i++)
  {
    for ( j = 0; j < col; j++)
    {
      result = fscanf(arq,"%lf", &matriz[i][j]);
      // printf("Valor lido na posicao %d %d = %.1f \n", i, j, matriz[i][j]); // Teste na fase de desenvolvimento!
    }
  }

  //liberação de memória da matriz
  for (i = 0; i < col; i++) {
    free(matriz[i]);
    free(matriz);
  }


  printf("\nPara checar: valor da ultima coluna na ultima linha = %.1f\n", matriz[li-1][col-1]); // Teste em execução: Li tudo?! Rsss...
  printf("\nPronto... arquivo lido e matriz criada!\n\n");
  fclose(arq);

  return matriz;

}
void imprime(int *linhas, int *colunas, double **matriz)
{
    printf("\nImprimindo...\n\n");
    int i,j;
    for (i = 0; i < *linhas; i++)
    {
        for (j = 0; j < *colunas; j++)
        {
            printf("%.1lf \t", matriz[i][j]);
         }
        printf("\n");
    }
    printf("\nImprimiu!\n");
}

void crescente()
{
    printf("Em ordem crescente\n");
}


void decre(int *i, int *j, double **matriz)
{
{
    int a, b;                                            // A funcao ja imprime a matriz em ordem decrescente
    float aux;
    int coluna;
    
    
 printf("\nDefina a coluna de 1 a %d : \n", *j);
    scanf("%d", &coluna);
    
    for(a = 0; a < *i; a++){
        for(b = a + 1; b < *i; b++){
            if(matriz[a][coluna] < matriz [b][coluna]){
                aux = matriz[a][coluna];
                matriz[a][coluna] = matriz[b][coluna];
                matriz[b][coluna] = aux;
            }
        }
    }

    for(a = 0; a < *i; a++){
        printf("[%.2lf]\n ",matriz[a][coluna]);
        printf("\n");
    }
}
printf("\n\n");
}
void maior()
{
    printf("Maior valor\n");
}

void menor()
{
    printf("Menor valor\n");
}

void repetidos()
{
    printf("Repetido?\n");
}

void sair()
{
    printf("Obrigado, espero ter sido util!\n\n");
}