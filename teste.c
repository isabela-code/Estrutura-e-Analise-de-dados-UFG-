#include <stdio.h>
#include "matriz.h"

int main()
{
    int continuar=1;

    do
    {
        printf("\n\tEscolha o que deseja fazer\n\n");
        printf("1. Imprimir a Matriz\n");
        printf("2. Valores da Matriz em ordem Crescente\n");
        printf("3. Valores da Matriz em ordem Decrescente\n");
        printf("4. Maior Valor presente na Matriz\n");
        printf("5. Menor Valor presente na Matriz\n");
        printf("6. Existem Valores Repetidos na Matriz?\n");
        printf("7. leitura de arquivo\n");
        printf("0. Sair\n\n");
        scanf("%d", &continuar);
        printf("\n");

        //system("cls || clear");

        switch(continuar)
        {
            case 1:
                imprime();
                break;

            case 2:
                crescente();
                break;

            case 3:
                decrescente();
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
            
            case 7:
                 funcao();
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