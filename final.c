#include<stdio.h>
#include<string.h>

void imprime()
{
    printf("Imprimiu!\n");
}

void crescente()
{
    printf("Em ordem crescente\n");
}

void decrescente()
{
    printf("Em ordem descrescente\n");
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

void funcao()
{
FILE*arq;
  char Nome[128];
  char Linha[100];
  char *result;
  int i, j;

  int linhas, colunas;

  // Entra com o nome (caminho) do ARQUIVO via TECLADO
  printf("\n\nNome do Arquivo .TXT sem a extensao:\n");
  scanf("%123s", Nome);
  strcat(Nome, ".txt");
  
  // Abre um arquivo TEXTO para LEITURA
  // arq = fopen("array1.txt", "rt");  // Opcao: se tiver dificuldade em oferecer o Nome via teclado!
  arq = fopen(Nome, "rt");

  if (arq == NULL)  // se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }
  
  *result = fscanf(arq,"%d%d", &linhas, &colunas);
  printf("\nArquivo: %s tem", Nome);
  printf("\n%d linhas e %d colunas\n", linhas, colunas);
  
  // FMF: criar a matriz
  float matriz[linhas][colunas];

  // iniciar os contadores
  i,j = 0;

  // FMF: leitura
  for (i = 0; i < linhas; i++)
  {
    
    for ( j = 0; j < colunas; j++)
    {
      
      *result = fscanf(arq,"%f", &matriz[i][j]);
      // printf("Valor lido na posicao %d %d = %.1f \n", i, j, matriz[i][j]); // FMF: Teste para a fase de desenvolvimento!

    }
    
  }

  printf("\nValor da ultima coluna na ultima linha = %.1f\n\n", matriz[linhas-1][colunas-1]); // FMF: Teste em execução: Li tudo?! Rsss...

  printf("\nPronto... acho que podemos continuar!\n\n");
  
  fclose(arq);
}
void sair()
{
    printf("Obrigado, espero ter sido util!\n\n");
}