/**
 * @file ex.c
 * @author Guilherme Dicati
 * @brief 
 * @version 0.1
 * @date 2024-04-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
/*
void exibeNumeros(int num){
    if (num == 0)
    {
        printf("fim.\n");
    }else
    {
        printf("Valor: %d\n",num);
        exibeNumeros(num -1);
        printf("Valor de volta: %d\n", num);
    }
    
    return;

}
*/
int somaRecursiva(int numero){
    if(numero == 0){
        return 0;
    }else {
        
        return numero + somaRecursiva(numero - 1);
    }
}


int main (){

    //int valor;
    int num;
    //printf("Digite o numero a ser exibido: ");
    //scanf("%d", &valor);
    //exibeNumeros(valor);

    printf("Digite um numero a ser somado: ");
    scanf("%d", &num);
    int resultado = somaRecursiva(num);
    
    printf("Soma = %d\n", resultado);
    
    return 0;
}
