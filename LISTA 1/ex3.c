/**
 * @file ex3.c
 * @author your name (you@domain.com)
 * @brief 3) Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída um 
 * triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4:
*
**
***
****
***
**
*
 * @version 0.1
 * @date 2024-04-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

void geraPiramide (int n){
    
    for (int c = 0; c < n; c++)
    {
        for (int l = n; l -c < n; l++)
        {
                
            
            
        }
        
        printf("\n");
    }
    

}

int main (){
    int n = 4;
    geraPiramide(n);
    return 0;
}