#include <stdio.h>
/*As regras do jogo são simples. No momento da aposta, o jogador decide o valor da aposta V e um número N (0 <= N <= 99999)
. Todos os dias, na praça principal da cidade, um número M é sorteado (0 <= M <= 99999). O prêmio de cada apostador é 
calculado da seguinte forma:
•	se M e N têm os mesmos quatro últimos dígitos (milhar, centena, dezena e unidade), o apostador recebe 
V × 3000 (por exemplo, N = 14302 e M = 34302);
•	se M e N têm os mesmos três últimos dígitos (centena, dezena e unidade), o apostador recebe V × 500 (por exemplo,
 N = 33444 e M = 22444);
•	se M e N têm os mesmos dois últimos dígitos (dezena e unidades), o apostador recebe V × 50 (por exemplo,
 N = 112 e M = 142212);
•	se M e N têm os dois últimos dígitos no mesmo grupo, correspondendo ao mesmo animal, o apostador recebe V × 16
(por exemplo, N = 82197 and M = 337600);
•	se nenhum dos casos acima ocorrer, o apostador não recebe nada.
Obviamente, o prêmio dado a cada apostador é o máximo possível de acordo com as regras acima. No entanto, não é possível
 acumular prêmios, de forma que apenas um dos critérios acima deve ser aplicado no cálculo do prêmio.
 Escreva um programa em C, que leia o valor apostado, o número escolhido pelo apostador, e o número sorteado, calcule e 
 imprima qual o prêmio que o apostador deve receber.
*/
int main(){
//vou dividir os numeros
int numN; 
int numSorte = 12399;
float vAposta;
float valorTotal=0;

printf("Insira um número entre 0 e 99999\n");
scanf("%i", &numN);

printf("Qual valor da sua aposta? \n");
scanf("%f", &vAposta);

int numMil = (numN/1000)%10;
int numCem = (numN%1000)/100;
int numDez = (numN%100)/10;
int numUni = numN%10;

int sorteMil =(numSorte/1000)%10;
int sorteCem=(numSorte/1000)/100;
int sorteDez=(numSorte%100)/10;
int sorteUni=numSorte%10;

//variável para comparar os ultimos digitos dos grupos de animais
int numFinal= (numDez*10)+numUni;
int sorteFinal = (sorteDez*10)+sorteUni;
 
if (numMil==sorteMil && numCem==sorteCem && numDez==sorteDez && numUni==sorteUni )
{
    valorTotal = vAposta*3000;
    printf("%.2f", valorTotal );
}
else if(numCem==sorteCem && numDez==sorteDez && numUni==sorteUni){
    valorTotal = vAposta*500;
    printf("%.2f ", valorTotal );
}
else if(numDez==sorteDez && numUni==sorteUni){
    valorTotal = vAposta*50;
    printf("%.2f ", valorTotal );
}
else if((sorteFinal == 0 || sorteFinal==97 || sorteFinal==98 || sorteFinal == 99) && sorteFinal==numFinal){
    valorTotal = vAposta*16;
    printf("%.2f ", valorTotal );
}
else {
    printf("Não ganhou nada :/ %.2f \n", valorTotal);
}
    
}

