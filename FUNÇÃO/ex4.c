/**
 * @file ex4.c
 * @author Guilherme Dicati
 * @brief Faça uma função que receba a média final de um aluno por parâmetro e retorne o seu conceito, conforme a tabela abaixo:

Nota Conceito
[ 9 - 10]  A
[ 7 – 9 [  B
[ 5 - 7 [  C
[ 0 – 5 [  D
 * @version 0.1
 * @date 2024-03-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
char notaConceito (float n){
    if (n >= 9 && n <= 10)
    {
        return 'A';
    } if (n >= 7 && n < 9)
    {
        return 'B';
    } if (n >= 5 && n < 7)
    {
        return 'C';
    }else{
        return 'D';
    }
    

}


int main (){

    float mediaFinal;

    printf("Digite sua media final: ");
    scanf("%f", &mediaFinal);
    char conceito = notaConceito(mediaFinal);

    printf("Sua nota conceito é: %c \n", conceito);


    return 0;
}