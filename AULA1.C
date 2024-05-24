/**
 * @file AULA1.C
 * @author your name (you@domain.com)
 * @brief Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de funcionar.
Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.


Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e reestabelecer os serviços.

Para isso, faça um programa que armazene os dados de 5 cidades onde estão localizados os servidores com problemas, cada cidade possui: nome (20 caracteres), quantidade de servidores ativos(inteiro), quantidade de servidores com problemas (inteiro) e quantidade total de servidores(inteiro).

Para isso, faça:

a) Faça um programa que receba os dados das 5 cidades: nome(strings), a quantidade de servidores ativos e a quantidade de servidores com falha ( salvos nas duas primeiras colunas de uma matriz de inteiros 5x3). Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.

b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;

c) Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes, as 3 quantidades de servidores de todos as cidades.

d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez). Exiba uma mensagem informando também caso não encontre o nome buscado.

e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de servidores com problemas (duas casas decimais).

f) Utilizando estrutura de repetição, calcule e exiba o percentual total de servidores ativos e de servidores com problemas.

g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades que têm o número de servidores com problemas maiores que os servidores ativos. Em seguida exiba o nome de todas as cidades (alteradas ou não).
Ex: "São Paulo" -> "São Paulo Defeated"

Obs.:

    Os itens devem ser executados sequencialmente (Não é um menu);
    Para obtenção da nota máxima, faça cada item, de A a G, em uma função separada. Não utilize variáveis globais.
    Sempre que possível, utilize estruturas de repetição;

 * @version 0.1
 * @date 2024-03-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){

char nomeCidades[5][21];
int servidores[5][3];

 for (int i = 0; i < 5; i++)
 {
    setbuf(stdin, NULL);

    printf("Digite o nome da cidade %d ", i+1);
    scanf("%20[^\n]", nomeCidades[i]);
    
    do
    {
    
    printf("Digite a quantidade de servidores ativos: ");
    scanf("%d", &servidores[i][0]);
        
    } while (servidores[i][0] < 0);
    
    do
    {
    printf("Digite a quantidade de servidores inativos: ");
    scanf("%d", &servidores[i][1]);
        
    } while (servidores[i][1] <= 0);
    

    servidores[i][2] = servidores[i][0] + servidores [i][1];
    
 }//for

 for (int i = 0; i < 5; i++)
 {
    printf("Numero de servidores de %s: %d\n", nomeCidades[i], servidores[i][2]);
 }
 




    return 0;
}