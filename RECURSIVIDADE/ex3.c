/**
 * @file ex3.c
 * @author Guilherme Dicati
 * @brief 3) Crie uma função que retorne x elevado a y através de operação de
 * multiplicação. A função recebe x e y por parâmetro
 * @version 0.1
 * @date 2024-04-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int powMult(int x, int y){
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return x * powMult(x, y-1);
    }
    

}

int main (){
    int x, y, resultado;
    printf("Digite a base: ");  
    scanf("%d",&x);
    
    printf("Digite a pontencia: ");
    scanf("%d", &y);
    
    resultado = powMult(x,y);
    printf("Resultado: %d\n",resultado);

    return 0;
}