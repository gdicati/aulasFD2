/**
 * @file exemplo retorno referncia.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-03-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>



void divide(int dividendo, int divisor, int* quociente , int* resto){
    *quociente = dividendo/divisor;
    *resto = dividendo % divisor;
    return;
}

int main (){
    int dividendo = 13, divisor = 5;
    int quociente;
    int resto;

    divide(dividendo, divisor, &quociente, &resto);
    printf("%d/%d = %d, resto %d \n",dividendo, divisor, quociente, resto);

    return 0;
}