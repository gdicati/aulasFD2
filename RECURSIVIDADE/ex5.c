/**
 * @file ex5.c
 * @author Guilherme Dicati
 * @brief 5) Um problema típico em ciência da computação consiste em
converter um número da sua forma decimal para binária. Crie um
algoritmo recursivo para resolver esse problema.
 Solução trivial: x=0 quando o número inteiro já foi convertido para
binário
 Passo da recursão: saber como x/2 é convertido. Depois, imprimir um
dígito (0 ou 1) dado o sucesso da divisão.
 * @version 0.1
 * @date 2024-04-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

void converteBinario(int x){
    int resto = 0;
    if (x == 0)
    {
        return;
    }else
    {
        resto = x % 2;
        x = x / 2;
        converteBinario(x);
        printf("%d",resto);
    }
    
    
}

int main (){
    
    int num;
    printf("Digite um numero para converter para binario:");
    scanf("%d",&num);
    converteBinario(num);

    return 0;
}