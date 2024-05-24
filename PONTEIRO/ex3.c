/**
 * @file ex3.c
 * @author Guilherme Dicati
 * @brief 3) Crie um programa que contenha uma matriz (3x3) de float. Imprima o
 * endereço de cada posição dessa matriz.
 * @version 0.1
 * @date 2024-04-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>
 int main (){
    float matriz[3][3] = {{0,0,0},{0,0,0},{0,0,0}} ;


    for (int c = 0; c < 3; c++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("%p ", &matriz[c][l]);
        }
        printf("\n");
    }
    

    return 0;
 }