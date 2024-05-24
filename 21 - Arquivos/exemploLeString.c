/**
 * @file exemploString.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *fp = fopen("../dadosString.txt", "r");
    
    if (fp == NULL)
    {
        printf("Erro ao abrir arquivo\n");
        exit(EXIT_FAILURE);
    }
    char frase[50];
    fgets(frase, 50, fp);

    printf("Dados lidos: %s\n", frase);
    fclose(fp);

    return EXIT_FAILURE;
}