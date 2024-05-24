/**
 * @file ex1.c
 * @author Guilherme Dicati
 * @brief Faça um algoritmo que implemente uma função que receba 3 números inteiros e retorne o maior valor.
 * Se algum número for negativo retorne -1;
 * @version 0.1
 * @date 2024-03-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int retornaMaior(int a, int b, int c){
    
    if (a >= b && a >= c)
    {
        return a;
    }if (b >= a && b >= c)
    {
        return b;
    }if (a < 0|| b < 0 || c == -1)
    {
        return -1;
    }else
    {
        return c;
    }
    

}/**
 * @brief retorna o maior valor entre 3 inteiros, ou -1 se houver numero negativo negativo
 * 
 * @return int 
 */

int main () {

    int num1, num2, num3;
    
        printf("Digite o Numero 1: ");
        scanf("%d",&num1);
        printf("Digite o Numero 2: ");
        scanf("%d",&num2);
        printf("Digite o Numero 3: ");
        scanf("%d",&num3);

        int maior = retornaMaior(num1,num2,num3);

        printf("O maior numero é: %d\n", maior);


    return 0;
}//main