/**
 * @file exemplo.c
 * @author Guilhrme dc
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

/// @brief 
/// @return 
int main (){

    FILE *fp = fopen("../dados.txt", "r");

    if (fp == NULL)
    {
        printf("Erro ao abrir arquivo.\n");
        exit(EXIT_FAILURE);
    }
    //char frase[50] = "Agora eu escrevo no HD!!\n";
    char frase[50];
    //int tamanho = strlen(frase);
    int c;
    int i = 0;
    /*for (int i = 0; i < tamanho; i++)
    {
        fputc(frase[i], fp);

    }   
    */
    while((c = fgetc(fp)) != EOF){
        frase[i] = c;
        i++;
    }
    frase[i] = '\0';

    printf("Dados lidos: %s\n",frase);
    fclose(fp);
    


    return EXIT_SUCCESS;
}