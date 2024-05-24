/**
 * @file aula 14 ex1.c
 * @author Guilherme Dicati
 * @brief 1) Crie uma estrutura para representar as coordenadas de
    um ponto no plano (posições X e Y). Em seguida, declare
    e leia do teclado dois pontos e exiba a distância entre
    eles.
 * @version 0.1
 * @date 2024-03-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct 
{
 float x1;
 float y1;
 float x2;
 float y2;
 float distancia;

}Cordernadas;


int main (){

    Cordernadas cordenada;
    printf("Digite a coordenada X1\n");
    scanf("%f", &cordenada.x1);
    printf("Digite a coordenada Y1\n");
    scanf("%f", &cordenada.y1);

    printf("Digite a coordenada X2\n");
    scanf("%f", &cordenada.x2);
    printf("Digite a coordenada Y2\n");
    scanf("%f", &cordenada.y2);

    cordenada.distancia = sqrt((pow(cordenada.x2 - cordenada.x1, 2))+ pow(cordenada.y2 - cordenada.y1, 2));    
    
    printf("A Distancia entre os dois pontos é %.2f \n", cordenada.distancia);


    return 0;
}