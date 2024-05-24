/**
 * @file ex1.c
 * @author Guilherme Dicati
 * @brief  1) Crie uma função que retorne o fatorial de um número passado por
parâmetro. A ideia do fatorial está abaixo:
 * @version 0.1
 * @date 2024-04-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
    if (num == 0)
    {
        return 1;

    }else if (num > 0)
    {
        return num * fatorial(num -1);

    }
    return num;
    
}


int main (){
    int fat;
    int num;
    
    printf("Digite o numero a fatorar: ");
    scanf("%d",&num);
    
    fat = fatorial(num);
    
    printf("%d! = %d\n", num, fat);

    return 0;
}