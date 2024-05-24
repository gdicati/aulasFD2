/**
 * @file ex aula potencia.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-03-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief calcula o quadrado de numero
 * 
 * @param numero 
 * @return int 
 */
int calculadoraQuadrado (int numero){
    /*
    int quadrado;
    quadrado = numero * numero;
    return quadrado;
    */
   return numero * numero;

}//calculadoraQuadrado

/**
 * @brief Calcula a soma de dois numeros inteiros
 * 
 * @param valor1 
 * @param valor2 
 * @return int 
 */
int calculaSoma(int valor1, int valor2){
    return valor1 + valor2;
}//calculaSoma


int main (int argc, char const **argv){
    
    printf("Quantidade de argumentos: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Argumento %d: %s\n", i, argv[i]);
    }
    

    int num;
    printf("Digite o numero a ser elevado ao quadrado: ");
    scanf("%d", &num);
    int meuQuadrado = calculadoraQuadrado(num);
    printf("O quadrad é : %d\n",meuQuadrado );

    return 0;
}//main

