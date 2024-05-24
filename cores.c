#include<stdlib.h>
#include<stdio.h>

// Texto Colorido Comum
#define BLK "\e[0;30m" // Preto 
#define RED "\e[0;31m" // Vermelho
#define GRN "\e[0;32m" // Verde
#define YEL "\e[0;33m" // Amarelo
#define BLU "\e[0;34m" // Azul
#define MAG "\e[0;35m" // Magenta
#define CYN "\e[0;36m" // Ciano
#define WHT "\e[0;37m" // Branco

// Texto Negrito
#define BBLK "\e[1;30m" // Preto Negrito
#define BRED "\e[1;31m" // Vermelho Negrito
#define BGRN "\e[1;32m" // Verde Negrito
#define BYEL "\e[1;33m" // Amarelo Negrito
#define BBLU "\e[1;34m" // Azul Negrito
#define BMAG "\e[1;35m" // Magenta Negrito
#define BCYN "\e[1;36m" // Ciano Negrito
#define BWHT "\e[1;37m" // Branco Negrito

// Texto Sublinhado
#define UBLK "\e[4;30m" // Preto Sublinhado
#define URED "\e[4;31m" // Vermelho Sublinhado
#define UGRN "\e[4;32m" // Verde Sublinhado
#define UYEL "\e[4;33m" // Amarelo Sublinhado
#define UBLU "\e[4;34m" // Azul Sublinhado
#define UMAG "\e[4;35m" // Magenta Sublinhado
#define UCYN "\e[4;36m" // Ciano Sublinhado
#define UWHT "\e[4;37m" // Branco Sublinhado

// Cor do fundo
#define BLKB "\e[40m" // Fundo Preto
#define REDB "\e[41m" // Fundo Vermelho
#define GRNB "\e[42m" // Fundo Verde
#define YELB "\e[43m" // Fundo Amarelo
#define BLUB "\e[44m" // Fundo Azul
#define MAGB "\e[45m" // Fundo Magenta
#define CYNB "\e[46m" // Fundo Ciano
#define WHTB "\e[47m" // Fundo Branco

// Cor fundo cor intensa
#define BLKHB "\e[0;100m" // Fundo Intenso Preto
#define REDHB "\e[0;101m" // Fundo Intenso Vermelho
#define GRNHB "\e[0;102m" // Fundo Intenso Verde
#define YELHB "\e[0;103m" // Fundo Intenso Amarelo
#define BLUHB "\e[0;104m" // Fundo Intenso Azul
#define MAGHB "\e[0;105m" // Fundo Intenso Magenta
#define CYNHB "\e[0;106m" // Fundo Intenso Ciano
#define WHTHB "\e[0;107m" // Fundo Intenso Branco

// Texto Cor intensa
#define HBLK "\e[0;90m" // Preto Intenso
#define HRED "\e[0;91m" // Vermelho Intenso
#define HGRN "\e[0;92m" // Verde Intenso
#define HYEL "\e[0;93m" // Amarelo Intenso
#define HBLU "\e[0;94m" // Azul Intenso
#define HMAG "\e[0;95m" // Magenta Intenso
#define HCYN "\e[0;96m" // Ciano Intenso
#define HWHT "\e[0;97m" // Branco Intenso

//Texto Negrito Cor intensa
#define BHBLK "\e[1;90m" // Preto Intenso Negrito
#define BHRED "\e[1;91m" // Vermelho Intenso Negrito
#define BHGRN "\e[1;92m" // Verde Intenso Negrito
#define BHYEL "\e[1;93m" // Amarelo Intenso Negrito
#define BHBLU "\e[1;94m" // Azul Intenso Negrito
#define BHMAG "\e[1;95m" // Magenta Intenso Negrito
#define BHCYN "\e[1;96m" // Ciano Intenso Negrito
#define BHWHT "\e[1;97m" // Branco Intenso Negrito

// Reseta as cores - texto branco fundo preto
#define RESET "\e[0m"

/**
 * @brief Posiciona o cursor em uma linha/coluna específica
 * 
 * @param line 
 * @param column 
 */
void gotoxy(int line, int column){
  printf("%c[%d;%df",0x1B,line,column);
}//gotoxy function

int main(int argc, char const *argv[])
{
  system("clear");
  gotoxy(2,10);
  printf( BYEL "\033[33;5mTitle of the Program" RESET);
  gotoxy(4,8);


  printf(BRED "Hey this is the color red, and it's bold! \n" RESET);
	printf(RED "If" BLU "you" YEL "are" GRN "bored" CYN "do" MAG "this! \n" RESET);
	printf(UCYN BRED "If" BBLU "you" BYEL "are" BGRN "bored" BCYN "do" BMAG "this! \n" RESET);
	printf(URED "If" UBLU "you" UYEL "are" UGRN "bored" UCYN "do" UMAG "this! \n" RESET);
        return 0;
}//main