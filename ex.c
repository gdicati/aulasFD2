/**
 * @file multiplataforma.c
 * @author Muriel Godoi
 * @brief Verificando o sistema operacional Win ou Linux
 * @date 2022-11-05
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void limpaTela(){
    #ifdef _WIN32 //Testa se o SO é Windows
        system("cls");
        printf("Está no Windows\n");
    #else
        system("clear");
        printf("Está no Linux\n");
    #endif
}//limpaTela

int main(int argc, char **argv){

    printf("Texto anterior\n");
    limpaTela();
    printf("Limpou\n");

    return 0;
}