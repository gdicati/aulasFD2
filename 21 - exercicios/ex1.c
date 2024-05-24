/**
 * @file ex1.c
 * @author Guilherme Dicati
 * @brief 1 Escreva um programa que leia do usuário o nome de um arquivo
texto. Em seguida, mostre na tela quantas linhas esse arquivo possui
 * @version 0.1
 * @date 2024-05-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main (){

    int contador = 0;
    char nome[50];
    printf("Digite o nome do arquivo: ");
    scanf("%49[^\n]", nome);
    
    printf("%s\n", nome);
    FILE *fp = fopen(nome, "r"); 
    if (fp == NULL)
    {
        perror("Não foi possivel encontrar o arquivo");
        exit(EXIT_FAILURE);
    }else{
        printf("Arquivo encontrado\n");
    }

    do
    {
        if (*fp == '\n')
        {
            contador++;
        }
        
        fp++;
        
    } while (*fp != EOF);

    printf("O arquivo tem %d linhas.\n", contador);
    

    

    return EXIT_SUCCESS;
}