/**
 * @file aula 14.c
 * @author Guilherme Dicati
 * @brief 
 * @version 0.1
 * @date 2024-03-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct Aluno
    {
        char nome[50];
        int idade;
        float peso;
        float altura;
    };//struct

int main(){
    
    struct Aluno meuAluno;
    strcpy(meuAluno.nome, "Guilherme");
    meuAluno.idade = 18;
    meuAluno.altura = 1.80;
    meuAluno.peso = 80;

    //struct Aluno outroAluno ={"Maria", 21,55,1.70};


    printf(" Nome: %s, Idade: %d, Peso: %.2f, Altura: %.2f\n",
            meuAluno.nome,
            meuAluno.idade,
            meuAluno.peso,
            meuAluno.altura
    );

    struct Aluno alunos[40];

    for (int i = 0; i < 40; i++)
    {
        printf("Nome: ");
        scanf("%19[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Peso: ");
        scanf("%f", &alunos[i].peso);
         
        printf("Altura: ");
        scanf("%f", &alunos[i].altura);
        
        setbuf(stdin,NULL);
    }
     





    return 0;
}






