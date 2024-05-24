/**
 * @file exmplo.c
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

    FILE *arquivo = fopen("dados.dat", "wb");//write binario
    if (arquivo == NULL)
    {
        perror("Erro ao abrir arquivo\n");
        exit(EXIT_FAILURE);
    }//if

    char texto[30] = "Hello World em binario";
    float salario = 1302.25;
    int vetor[5] = {10,20,30,40,50};
    fwrite(&salario, sizeof(float), 1, arquivo);
    fwrite(texto, sizeof(char), 30, arquivo);
    fwrite(vetor, sizeof(int), 5, arquivo);

    fclose(arquivo);
    

    return EXIT_SUCCESS;
}