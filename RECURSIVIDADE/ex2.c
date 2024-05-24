/**
 * @file ex2.c
 * @author Guilherme Dicati
 * @brief  2) Crie uma função que retorne x*y através de operação de soma. A função
recebe x e y por parâmetro
 * @version 0.1
 * @date 2024-04-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int multSoma(int x ,int y){
    if (x == 0 || y == 0)
    {
        return 0;
    }else
    {
       return x + multSoma(x, y-1);
    }
    
    

}

int main (){
    int x, y;
    printf("Digite a operação (X.Y): ");
    scanf("%d.%d", &x, &y);
    int resultado = multSoma(x,y);
    printf("Resultado = %d\n", resultado);
    return 0;
}