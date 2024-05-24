/**
 * @file ex3.c
 * @author your name (you@domain.com)
 * @brief 3) Escreva uma função que receba como parâmetro dois vetores via referência( A e B)
e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N
alocado dinamicamente, em que:
C[i] = A[i] * B[i]
 * @version 0.1
 * @date 2024-05-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int* retornaVetor(int a[], int b[], int n){
    int* c = (int*) calloc(n, sizeof(int));
    if (c == NULL)
    {
        perror("erro ao alocar memoria.");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] * b[i];
    }
    return c;
}

int main (){

    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ",i+1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("b[%d]: ",i+1);
        scanf("%d", &b[i]);
    }
    int* c = retornaVetor(a,b,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
    free(c);
    
    

    return EXIT_SUCCESS;
}