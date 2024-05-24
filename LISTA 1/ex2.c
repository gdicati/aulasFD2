/**
 * @file ex2.c
 * @author your name (you@domain.com)
 * @brief 2) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.
Dica: Procure pelo algoritmo BubbleSort no Google
 * @version 0.1
 * @date 2024-04-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[21];
    char esporte[21];
    int idade;
    float altura;
}Atleta;

int main (){

    Atleta meusAtletas[5];
    for (int i = 0; i < 5; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite o nome do atleta %d: ", i+1);
        scanf("%21[^\n]", meusAtletas[i].nome);
        setbuf(stdin, NULL);
        printf("Digite seu esporte: ");
        scanf("%21[^\n]", meusAtletas[i].esporte);
        
        printf("Digite sua idade: ");
        scanf("%d", &meusAtletas[i].idade);

        printf("Digite sua altura: ");
        scanf("%f", &meusAtletas[i].altura);

    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i -1; j++)
        {
            if (meusAtletas[j].idade > meusAtletas[j+1].idade)
            {
                Atleta temp = meusAtletas[j];
                meusAtletas[j] = meusAtletas[j+1];
                meusAtletas[j+1] = temp;    
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", meusAtletas[i].idade);
    }
        

    return 0;
}