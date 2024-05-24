/**
 * @file aula 15 ex1.c
 * @author Guilherme Dicati
 * @brief 1) Crie uma enumeração representando os meses do ano.
Agora, escreva um programa que leia um valor inteiro do
teclado e exiba o nome do mês correspondente e a
quantidade de dias que ele possui.
 * @version 0.1
 * @date 2024-03-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

enum mesesAno {JANEIRO = 1, FEVEREIRO, MARÇO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO};

int main (){
    enum mesesAno op;

    printf("Digite o numero do mes: ");
    scanf("%u", &op);



    switch (op)
    {
    case 1:
    printf("Janeiro\n");
    printf("31 Dias\n");
    break;
    case 2:
    printf("Fevereiro\n");
    printf("28/29 Dias\n");    
    break;
    case 3:
    printf("Março\n");
    printf("31 Dias\n");
    break;
    case 4:
    printf("Abril\n");
    printf("30 Dias\n");
    break;
    case 5:
    printf("Maio\n");
    printf("31 Dias\n");
    break;
    case 6:
    printf("Junho\n");
    printf("30 Dias\n");
    break;
    case 7:
    printf("Julho\n");
    printf("31 Dias\n");
    break;
    case 8:
    printf("Agosto\n");
    printf("31 Dias\n");
    break;
    case 9:
    printf("Setembro\n");
    printf("30 Dias\n");
    break;
    case 10:
    printf("Outubro\n");
    printf("31 Dias\n");
    break;
    case 11:
    printf("Novembro\n");
    printf("30 Dias\n");
    break;
    case 12:
    printf("Dezembro\n");
    printf("31 Dias\n");
    break;    
    }


    return 0;
}