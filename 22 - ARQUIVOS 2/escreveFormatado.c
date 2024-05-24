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

    FILE *arquivo = fopen("dadosFormatados.txt", "w");//write formatado
    if (arquivo == NULL)
    {
        perror("Erro ao abrir arquivo\n");
        exit(EXIT_FAILURE);
    }//if

    char texto[30] = "Hello World formatado\n";
    float salario = 1302.25;
    int vetor[5] = {10,20,30,40,50};


    fprintf(arquivo,"%.2f", salario);
    
    fprintf(arquivo,"%s", texto);
    
    for (int i = 0; i < 5; i++)
    {
        fprintf(arquivo,"%d ", vetor[i]);
    }
    

    fclose(arquivo);
    

    return EXIT_SUCCESS;
}