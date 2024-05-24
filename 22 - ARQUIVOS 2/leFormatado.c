/**
 * @file escreveFormatadoC.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){

    FILE *arquivo = fopen("dadosFormatados.txt", "r");//read formatado
    if (arquivo == NULL)
    {
        perror("Erro ao abrir arquivo\n");
        exit(EXIT_FAILURE);
    }//if

    char texto[30];
    float salario;
    int vetor[5];


    fscanf(arquivo, "%f", &salario);
    fscanf(arquivo, "%[^\n]\n", texto);
                    //le tudo exceto o \n, e dps adiciona o \n pra n virar lixo
    for (int i = 0; i < 5; i++)
    {
    fscanf(arquivo, "%d", &vetor[i]);
    }
    //le arquivo
    
    printf("Salario: %.2f\n", salario);
    
    printf("Texto: %s\n", texto);
    
    for (int i = 0; i < 5; i++)
    {
        printf("Vetor[%d]: %d\n", i+1, vetor[i]);
    }
    //printa conteudo

    fclose(arquivo);
    

    return EXIT_SUCCESS;
}