/**
 * @file ex4.c
 * @author Guilherme Dicati ()
 * @brief Faça uma função recursiva que retorne o n-ésimo termo da sequência de Fibonacci, sendo que n é recebido por parâmetro.
 * Utilize essa função para desenvolver um programa que mostre no main() os n termos dessa sequência na tela,
 * a partir do valor de n recebido pelo teclado. Sabe-se que o 1º termo é 0 e o 2º termo é 1.
 * @version 0.1
 * @date 2024-04-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int calculaFib(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;

    }else{
        return calculaFib(n-1) + calculaFib(n-2);
    }
}

int main (){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    n = calculaFib(n);
    printf("%d\n", n);

    return 0;
}