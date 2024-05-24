/**
 * @file aula 14 ex2.c
 * @author Guilherme Dicati
 * @brief 2) Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:
 Horário: composto de hora, minutos e segundos.
 Data: composto de dia, mês e ano.
 Compromisso: local, horário e texto que descreve o
compromisso.
 * @version 0.1
 * @date 2024-03-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int hora, minuto, segundo;
}Horario;

typedef struct 
{
    int dia, mes, ano;
}Data;

typedef struct
{
    char local[30];
    Data data;
    Horario hora;
    char compromisso[100];
}Compromisso;




int main (){

    Compromisso meuComprimisso;

    printf("Descreva seu comprimisso: ");
    scanf("%100[^\n]", meuComprimisso.compromisso);
    setbuf(stdin,NULL);

    printf("Qual o local de seu compromisso? ");
    scanf("%30[^\n]", meuComprimisso.local);
    setbuf(stdin,NULL);

    printf("Digite o Dia de seu compromisso: ");
    scanf("%d/%d/%d", &meuComprimisso.data.dia, &meuComprimisso.data.mes, &meuComprimisso.data.ano);


    printf("Digite a hora de seu compromisso: ");
    scanf("%d:%d:%d",  &meuComprimisso.hora.hora, &meuComprimisso.hora.minuto, &meuComprimisso.hora.segundo);
    setbuf(stdin,NULL);

    printf("\nDescrição:%s\nLocal:%s\n Data:%.2d/%.2d/%.2d\n Hora:%.2d:%.2d:%.2d\n",
     meuComprimisso.compromisso,
     meuComprimisso.local,
     meuComprimisso.data.dia,
     meuComprimisso.data.mes,
     meuComprimisso.data.ano,
     meuComprimisso.hora.hora,
     meuComprimisso.hora.minuto,
     meuComprimisso.hora.segundo);




    return 0;
}