/**
 * @file aula 14 ex3.c
 * @author Guilherme Dicati 
 * @brief 3) Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.
 media ≥ 7 → Aprovado;
 3 ≤ media < 7 → Exame;
 media < 3 → Reprovado;
 * @version 0.1
 * @date 2024-03-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{
 char nome[24];
 char curso[24];
 float nota[4];
 float media;
 float situacao;
}Aluno;


int main (){

    Aluno meuAluno;
    printf("DIGITE SEU NOME: ");
    scanf("%24[^\n]",meuAluno.nome);

    printf("DIGITE SEU CURSO: ");
    scanf("%24[^\n]", meuAluno.curso);

    for (int i = 0; i < 4; i++)
    {
        printf("DIGITE SUA NOTA %d: ", i+1);
        scanf("%f", meuAluno.nota[i]);
    }
    


    return 0;
}