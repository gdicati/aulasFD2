/**
 * @file ex2.c
 * @author Guilherme Dicati
 * @brief 2) Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7
 * @version 0.1
 * @date 2024-03-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

float retornaPeso(char sexo, float altura){
    if (sexo == 'H' || sexo == 'h')
    {
        return (72.7 * altura) - 58;
    }if (sexo == 'M' || sexo == 'm')
    {
        return (62.1 * altura) - 44.7;
    } else
    {
        printf("Sexo invalido\n");
    }
    return -1;
}

/**
 * @brief função que calcula peso ideal
 * 
 * @return float 
 */

int main (){

    float altura;
    char sexo;
    printf("Para calcular seu peso ideal primeiro digite seu sexo (M/H): ");
    scanf("%c", &sexo);
    printf("Depois digite sua altura: ");
    scanf("%f", &altura);

    float pesoIdeal = retornaPeso(sexo, altura);
    printf("Seu peso ideal é : %.2fkg\n", pesoIdeal);


    return 0;
}