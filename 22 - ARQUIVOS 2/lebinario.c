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

    FILE *arquivo = fopen("dados.dat", "rb");//write binario
    
    if (arquivo == NULL)
    {
        perror("Erro ao abrir arquivo\n");
        exit(EXIT_FAILURE);
    }//if

    char texto[30];
    float salario;
    int vetor[5];
    
    /*
    Tem que ser na ordem que foi escrito no hdd senao da B.O
    */
    
    fread(&salario, sizeof(float), 1, arquivo);
    fread(texto, sizeof(char), 30, arquivo);
    fread(vetor, sizeof(int), 5, arquivo);

    printf("Salario: %.2f\n", salario);
    
    printf("Texto: %s\n", texto);
    
    for (int i = 0; i < 5; i++)
    {
        printf("Vetor[%d]: %d\n", i+1, vetor[i]);
    }
    

    fclose(arquivo);
    

    return EXIT_SUCCESS;
}