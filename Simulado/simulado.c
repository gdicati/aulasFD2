/**
 * @file simulado.c
 * @author Guilherme Dicati
 * @brief Você foi contratado pela Riot Games para elaborar partes do sistema sistema de Ranking do League of Legends. Para isso:

a) Defina um tipo e estrutura para salvar os dados de jogadores para um Ranking.
Cada jogador possui: nome, vitórias, derrotas, tier(nível) e pontos.

Os tiers são: Bronze, Prata, Ouro, Platina, Diamante e Desafiante. Para organizar os níveis utilize uma enumeração.

b) Receba do teclado e armazene os dados de 6 jogadores. Não devem ser permitidos valores negativos, novos valores devem ser solicitados caso necessário.

c) Exiba uma tabela alinhada com o nome e a taxa de vitórias (winrate) de cada jogador
  winrate = vitórias / (vitórias+derrotas) * 100.
  Cada calculo deve ser feito por meio de uma função adicional que recebe o número de vitórias e derrotas via cópia e retorna o winrate.

d) Exiba uma tabela com os líderes (maior número de pontos) de cada um dos níveis. Para isso, faça uma função extra que receba um tier e retorne uma estrutura do tipo Jogador com os dados do líder.

e) Faça a busca de um jogador pelo nome digitado. A busca deve ser feita por uma função adicional que recebe o nome e retorna os dados de vitórias, derrotas, tier e pontos via referência.

f) Utilizando uma função recursiva, calcule a soma de todas as partidas (vitórias e derrotas) de todos os jogadores.

Cada um dos itens de B a E deve ser implementada em uma função diferente.
Não é permitido o uso de variáveis globais.
Nas funções extras, caso necessário, utilize parâmetros adicionais.
 * @version 0.1
 * @date 2024-04-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <stdlib.h>

typedef enum {Bronze = 1, Prata, Ouro, Platina, Diamante, Desafiante}tiers;

typedef struct 
{   
    char nome[21];
    int vitorias, derrotas, pontos;
    tiers elo;

}Jogador;


void preencheJogador(Jogador* player){
    
    for (int i = 0; i < 1; i++)
    {
        setbuf(stdin,NULL);
        printf("Digite seu nickname: ");
        scanf("%20[^\n]", player[i].nome);
        do  {
            printf("Digite seu num de vitorias: ");
            scanf("%d", &player[i].vitorias);
        } while (player[i].vitorias < 0);
        
        do  {
            printf("Digite seu num de derrotas: ");
            scanf("%d", &player[i].derrotas);
        } while (player[i].derrotas < 0);
        
        do  {
            printf("Digite seu elo (1-Bronze| 2-Prata| 3-Ouro| 4-Platina| 5-Diamante| 6-Desafiante) : ");
            scanf("%u", &player[i].elo);
        } while (player[i].elo < 0);
        
        do  {
            printf("Digite quantos pontos: ");
            scanf("%d", &player[i].pontos);
        } while (player[i].pontos < 0);
                
        printf("\n");
    
    }
    


    return;
}

int calculaWR(int vitorias, int derrotas){
    int winrate;
  
        winrate = vitorias / (vitorias + derrotas) * 100;
        return winrate;

}
void tabelaJogadores(Jogador* player){

    for (int i = 0; i < 6; i++)
    {
        int wr = calculaWR(player[i].vitorias, player[i].derrotas);
        printf("NICK: %21s | WR: %5d\n", player[i].nome, wr);
    }
    

    return;
}


int main (){
    Jogador jogadores[6];

    preencheJogador(jogadores);
    
    tabelaJogadores(jogadores);

    return 0;
}