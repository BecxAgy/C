#include <stdio.h>

/*Carl aprendeu recentemente o que é o sistema binário. Ele aprendeu, por exemplo, que a 
representação binária de um inteiro positivo k é uma string anan−1...a1a0 onde cada ai é um dígito binário 
0 ou 1, iniciando com an = 1, e de tal forma que k = Σ ai × 2
i
.
César, o irmão mais velho de Carl, resolveu lhe propor um desafio: "Olhe Carl, eu tenho uma pergunta 
fácil para você: eu te darei um valor inteiro, e você tem que me diz quantos dígitos 1 existem na 
representação binária deste número. Se prepare!". Carl aceitou o desafio.
Para ajudar Carl, você deve escrever um algoritmo em C, que o ajude nesta tarefa. O algoritmo deverá 
ler um inteiro entre 0 e 32 e imprimir o total de dígitos 1 existentes no número*/
 
int main(){
    
    int num;
    int contMil = 0;
    int contCent = 0;
    int contDez = 0;
    int contUni= 0;
    int cont01 = 0;


    printf("Insira um número entre 0 e 32 \n");
    scanf("%i", &num);

    int binMil = (num/16)%2;
    int binCent = (num/8)%2;
    int binDez = (num/4)%2;
    int binUni = (num/2)%2;
    int bin01 = num%2;

    printf("%i %i %i %i %i\n", binMil, binCent, binDez, binUni, bin01);

    if (binMil== 1 )
    {
        contMil=+1;
    }
    if (binCent==1)
    {
        contCent=+1;
    }
    if (binDez == 1)
    {
        contDez=+1;
    }
    if (binUni == 1)
    {
        contUni=+1;
    }
    if (bin01 == 1)
    {
        cont01=+1;
    }

    int contfim = contMil+contCent+contDez+contUni+cont01;
    
    printf("A quantidade de dígito 1 é  %i", contfim);

}