// arquivo *.c da Biblioteca



#include <stdio.h>

#include <string.h> // utilizada na função leitura_txt()







void leitura_txt(int *linhas, int *colunas, float matriz[][20])

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

  if (arq == NULL)  // se houve erro na abertura

  {

     printf("Problemas na abertura do arquivo\n");

     return;

  }

  /* *result = */ fscanf(arq,"%d%d", &li, &col);

  *linhas = li;

  *colunas = col;



  printf("\nArquivo: %s tem", Nome);

  printf("\n%d linhas e %d colunas\n", li, col);

 

  // Inicia os contadores

  i,j = 0;

  for (i = 0; i < li; i++)

  {

    for ( j = 0; j < col; j++)

    {

      /*result = */fscanf(arq,"%f", &matriz[i][j]);

      // printf("Valor lido na posicao %d %d = %.1f \n", i, j, matriz[i][j]); // Teste na fase de desenvolvimento!

    }

  }

  printf("\nPara checar: valor da ultima coluna na ultima linha = %.1f\n", matriz[li-1][col-1]); // Teste em execução: Li tudo?! Rsss...

  printf("\nPronto... arquivo lido e matriz criada!\n\n");

  fclose(arq);

}



void imprime(int *linhas, int *colunas, float matriz[][20])

{

    printf("\nImprimindo...\n\n");

    int i,j;

    for (i = 0; i < *linhas; i++)

    {

        for (j = 0; j < *colunas; j++)

        {

            printf("%.1f \t", matriz[i][j]);

         }

        printf("\n");

    }

    printf("\nImprimiu!\n");

}



void crescente()

{

    printf("Em ordem crescente\n");

}



void decre(int *linhas, int *colunas, float matriz[][20])

{

int a, b;                                              // A funcao ja imprime a matriz em ordem decrescente

    float aux;

    int selecionaColuna;

    printf ("Selecione a coluna desejada:\n");

    scanf ("%d", &selecionaColuna);

    float vetor[*linhas];

    for (a = 0; a < *linhas; a++) 

    {

        vetor[a] = matriz[a][selecionaColuna];

    }



   for ( a = 0; a < *linhas; a++)

    {

        for (b = a+1; b<*linhas; b++)

        {

            if (vetor[a] < vetor[b])

            {

                aux = vetor[a];

                vetor[a] = vetor[b];

                vetor[b] = aux;

            }

        }

    }

    for (a = 0; a < *linhas; a++)

    {

       printf ("%.1f ", vetor[a]);

    }



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