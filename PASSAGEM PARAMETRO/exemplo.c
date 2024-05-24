/**
 * @file exemplo.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.5
 * @date 2024-03-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <stdio.h>
#include <stdlib.h>


void incrementaNumero (int* numero){
    (*numero)++;
    printf("o ponteiro para o numero é: %p\n", numero);
    return;
}


int main (){
      int numero;
      printf("Digite seu numero: ");
      scanf("%d", &numero);

      incrementaNumero(&numero);
      printf("Seu numero +1 é :%d \n", numero);


    return 0;
}