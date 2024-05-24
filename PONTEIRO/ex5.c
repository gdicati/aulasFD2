/**
 * @file ex5.c
 * @author Guilherme Dicati ()
 * @brief Elabora uma função que receba duas strings como parâmetros e verifique se a segunda string está dentro da primeira. 
 * Para isso, utilize apenas aritmética de ponteiros.
 * @version 0.1
 * @date 2024-04-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <string.h>

int estaContido(char *string1, char *string2) {
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    
    // verifica se a segunda string é maior que a primeira
    if (len2 > len1) {
        return 0;
    }

    for (int i = 0; i <= len1 - len2; i++) {
        
        if (strncmp(string1 + i, string2, len2) == 0) {
            return 1;
        }
    }

    return 0; 
}

int main() {
    char string1[] = "Hello, world!";
    char string2[] = "world";

    if (estaContido(string1, string2)) {
        printf("'%s' encontrado em '%s'\n", string2, string1);
    } else {
        printf("'%s' não encontrado em '%s'\n", string2, string1);
    }

    return 0;
}
