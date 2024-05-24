/**
 * @file exemplo struct.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-03-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float x;
    float y;
}Ponto;

void incrementa(Ponto* ponto){
    ponto->x++;
    ponto->y++;
    return;

}

int main (){
    Ponto meuPonto = {5, 8};
    printf("Meu ponto é (%.2f,%.2f)\n", meuPonto.x, meuPonto.y);
    incrementa(&meuPonto);
    printf("Meu novo ponto é (%.2f,%.2f)\n", meuPonto.x, meuPonto.y);
    return 0;
}