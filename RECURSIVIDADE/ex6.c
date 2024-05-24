/**
 * @file ex6.c
 * @author Guilherme Dicati
 * @brief 6) Considere a funcaox abaixo. O que essa função faz? Escreva
 * uma função não-recursiva que resolve o mesmo problema
 * int funcaox(int a){
 * if(a <= 0) return 0;
 * else return a + funcaox(a-1);
}//funcaox
 * @version 0.1
 * @date 2024-04-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>


int funcaox (int a){
    int soma = 0;
    if (a <= 0)
    {
        return 0;
    }
    
    for (int i = a; i > 0; i--)
    {
        soma += i;
    }
    return soma;
    
}

int main (){        
    int a;
    

    printf("Digite um numero: ");
    scanf("%d", &a);
    
    a = funcaox(a);
    printf("%d\n", a);

    return 0;
}