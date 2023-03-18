#include <stdio.h>



#include "cabeca.h"

#define L 100

#define C 20



int linhas, colunas;

float matriz[L][C];



int main()

{



    leitura_txt(&linhas, &colunas, matriz);



    int continuar=1;

    do

    {

        printf("\n\tEscolha o que deseja fazer\n\n");

        printf("1. Imprimir a Matriz\n");

        printf("2. Valores de uma Coluna da Matriz em ordem Crescente\n");

        printf("3. Valores de uma Coluna da Matriz em ordem Decrescente\n");

        printf("4. Maior Valor de uma Coluna da Matriz\n");

        printf("5. Menor Valor de uma Coluna da Matriz\n");

        printf("6. Exibir os Valores Repetidos de uma Coluna da Matriz\n");

        printf("0. Sair\n\n");



        scanf("%d", &continuar);

        printf("\n");



        switch(continuar)

        {

            case 1:

                imprime(&linhas, &colunas, matriz);

                break;



            case 2:

                crescente();

                break;



            case 3:

                decre(&linhas, &colunas, matriz);

                break;



            case 4:

                maior();

                break;



            case 5:

                menor();

                break;



            case 6:

                repetidos();

                break;



            case 0:

                sair();

                break;



            default:

                printf("\nDigite uma opcao valida\n");

        }

    } while(continuar);



    return 0;

}