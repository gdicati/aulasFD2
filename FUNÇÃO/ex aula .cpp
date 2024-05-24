/**
 * @file ex aula .c
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


int recebeIdade (){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    return idade;

}//recebeIdade

void exibeIdade(int idade){
    

    printf("Voce tem %d anos de idade\n", idade);
}//exibeIdade




int main (){

    /*printf("Antes da Função\n\n");

    exibeMensagem();

    printf("Depois da Função\n");*/

    int minhaIdade;
    minhaIdade = recebeIdade();
    exibeIdade(minhaIdade);

    return 0;

}
/*
void exibeMensagemInterna(){

    printf("Hello dentro da mensagem !!\n\n");
    return;
}//exibeMensagemInterna



 * @brief função que exibe hello 
 *  
 */
/*void exibeMensagem(){
    printf("Antes da mensagem interna !!\n\n");
    exibeMensagemInterna();
    printf("Depois da mensagem interna !!\n\n");
    return;
}//exibeMensagem*/
//main