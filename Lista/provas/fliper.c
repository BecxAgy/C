#include <stdio.h>
/*Flíper é um tipo de jogo onde uma bolinha de metal cai por um labirinto de caminhos até chegar na parte
de baixo do labirinto. A quantidade de pontos que o jogador ganha depende do caminho que a bolinha seguir.
O jogador pode controlar o percurso da bolinha mudando a posição de algumas portinhas do labirinto. 
Cada portinha pode estar na posição 0, que significa virada para a esquerda, ou na posição 1 que quer dizer
virada para a direita. Considere o flíper da figura abaixo, que tem três portinhas. A portinha Q está na posição
0 e a portinha R, na posição 1. Desse jeito, a bolinha vai cair pelo caminho C.
Escreva um programa em C, que leia a posição das portinhas P, Q e R e indique em qual das saídas a bolinha irá cair.*/
//se   Q = 0 e R =1  cai na entrada C 
// se Q = 0 e R = 0 cai na entrada D

//se Q = 1 e P = 1 Cai em A
//se Q = 1 e P = 0 Cai em B
int main (){
   int  q, r, p;

   printf ("Insira 0 para a porta Q virar a esquerda ou 1 para virar para direita\n");
   scanf("%i", &q);

   printf ("Insira 0 para a porta R virar a esquerda ou 1 para virar para direita\n");
   scanf("%i", &r);

   printf ("Insira 0 para a porta P virar a esquerda ou 1 para virar para direita\n");
   scanf("%i", &p);

   if ( q == 0 &&  r == 1)
   {
       printf("A bolinha caiu em C\n");
   }
   else if (q == 0 && r==0){
        printf("A bolinha caiu em D\n");
    }   


   if (q == 1 && p==1)
   {
       printf("A bolinha caiu em A\n");
   }
   else if (q == 1 && p == 0){
        printf("A bolinha caiu em B\n");
       }
   
   
}