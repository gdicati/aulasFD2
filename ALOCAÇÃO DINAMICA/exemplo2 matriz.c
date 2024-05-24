/**
 * @file exemplo2 matriz.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>



int main (){

    int linha = 5;
    int coluna = 3;

    int **matriz = (int **) malloc(linha* sizeof(int*));

    for (int l = 0; l < coluna; l++)
    {
        matriz[l] = (int *) malloc(coluna * sizeof(int));
    }

    for (int l = 0; l < linha; l++)
    {
        for (int c = 0; c < coluna; c++)
        {
            printf("Digite o valor de (%d,%d): ",l+1, c+1);
            scanf("%d", &matriz[c][l]);
        }
        
    }

        for (int l = 0; l < linha; l++)
    {
        for (int c = 0; c < coluna; c++)
        {
            printf("(%d,%d): %-6d ",l+1, c+1, matriz[c][l]);
           
        }
        printf("\n");
    }
    
    
    for (int l = 0; l < coluna; l++)
    {
        free(matriz[l]);
    }
    free(matriz);




    return EXIT_SUCCESS;
}