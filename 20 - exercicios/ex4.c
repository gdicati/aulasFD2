/**
 * @file ex4.c
 * @author Guilherme Dicati
 * @brief 4) Escreva uma função que receba como parâmetro um valor L e um valor C e retorne
o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas.
Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.
 * @version 0.1
 * @date 2024-05-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int** matrizDinamica(int l, int c){

    int** matriz = (int**) calloc(l, sizeof(int*));
    for (int i = 0; i < l; i++)
    {
        matriz[i] = (int*) calloc(c, sizeof(int));
    }
    if (matriz == NULL)
    {
        perror("erro ao alocar memoria.");
        exit(EXIT_FAILURE);
    }else{
        return matriz;
    }
    
    
}

int main (){

    int l , c;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &c);

    int** matriz = matrizDinamica(l, c);

    for (int i = 0; i < c; i++)
    {
        free(matriz[i]);
    }
    free(matriz);


    return EXIT_SUCCESS; 
}