#include <stdio.h>
/*17. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum 
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado 
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" 
no sentido de que as notas de menor valor fossem distribuídas em número mínimo 
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar 
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir 
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00)*/

int main(){
    int valorInserido;
    int cont100=0;
    int cont50=0;
    int cont20=0;
    int cont10=0;
    int cont5=0;
    int cont2=0;
    int cont1=0;

   

    printf("insira um valor para ser sacado: \n");
    scanf("%i", &valorInserido);
 
    while (valorInserido > 0)
    {  
    
        if (valorInserido>= 100)
        {
            valorInserido = valorInserido - 100;
            cont100++;
            
        }
        if (valorInserido>= 50 && valorInserido<100)
        {
            valorInserido = valorInserido - 50;
            cont50++;
        }
        if (valorInserido>= 20 && valorInserido<50)
        {
            valorInserido = valorInserido - 20;
            cont20++;
        }
        if (valorInserido>=10 && valorInserido<20)
        {
            valorInserido = valorInserido - 10;
            cont10++;
        }
        if (valorInserido>=5 && valorInserido<10)
        {
            valorInserido = valorInserido - 5;
            cont5++;
        }
        if (valorInserido>=2 && valorInserido < 5)
        {
            valorInserido = valorInserido - 2;
            cont2++;
        }
        if (valorInserido>=1 && valorInserido < 2)
        {
            valorInserido = valorInserido - 1;
            cont1++;
        }

        
    }
        printf("A distribuição de notas será: \n")
        printf(" Nota de 100 = %i\n", cont100);
        printf(" Nota de 50 = %i\n", cont50);
        printf(" Nota de 20 = %i\n", cont20);
        printf(" Nota de 10 = %i\n", cont10);
        printf(" Nota de 5 = %i\n", cont5);
        printf(" Nota de 2 = %i\n", cont2);
        printf(" Nota de 1 = %i\n", cont1);

}