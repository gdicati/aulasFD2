/**
 * @file ex3.c
 * @author Guilherme Dicati
 * @brief 3) Escreva um procedimento que recebe por parâmetro as 3 notas de um
 aluno e uma letra. Se a letra for A, o procedimento calcula a média
 aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
 e 2) e se for S, a soma das notas. O valor calculado também deve ser
 retornado e exibido na função main.
 * @version 0.1
 * @date 2024-03-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

float calculaNotas(char op, float nota1, float nota2, float nota3){

    switch (op)
        {
        case 'a':
        case 'A':
            return (nota1 + nota2 + nota3)/3;
            break;
        case 'p':
        case 'P':
            return (nota1*5 + nota2*3 + nota3*2)/10;
            break;
        case 's':
        case 'S':
            return (nota1 + nota2 +nota3);
            break;
        default:
            printf("Operação invalida\n");
            return -1;
            break;
        }
    
}/**
 * @brief função que faz  uma de 3 operações retornando o resultado
 * 
 * @return float 
 */

int main(){

    float nota1, nota2, nota3;
    char op;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Tipo de operação(A = Aritimetica | P = Ponderada | S = Soma): ");
    scanf(" %c", &op);

    float resultado = calculaNotas(op, nota1, nota2, nota3);

    printf("O resultado da sua operação é: %.2f\n", resultado);


    return 0;
}