/**
 * @file ex1.c
 * @author your name (you@domain.com)
 * @brief 1) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte,
 * idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.

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

    float alto = 0;
    int velho = 0;
    int a, v;
    for (int i = 0; i < 5; i++)
    {
        if (velho < meusAtletas[i].idade)
        {
            velho = meusAtletas[i].idade;
            v = i;
        }
        if (alto < meusAtletas[i].altura)
        {
            alto = meusAtletas[i].altura;
            a = i;
        }
        
    }
    
    printf("\nO atleta mais velho é : %s\n", meusAtletas[v].nome);
    printf("O atleta mais alto é : %s\n", meusAtletas[a].nome);



    return 0;
}