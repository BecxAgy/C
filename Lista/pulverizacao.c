#include <stdio.h>
/*i37. Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de 
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um 
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se 
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização 
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.*/

int main(){
    float area;
    int tipo;
    float valor;
    float valorTotal;

    printf("Qual total da área a ser pulverizada?\n");
    scanf("%f", &area);

    printf("Digite 1 para exterminar ervas daninhas \n");
    printf("Digite 2 para exterminar gafanhotos \n");
    printf("Digite 3 para exterminar broca \n");
    printf("Digite 4 para exterminar todos acima \n");
    scanf("%i", &tipo);

    if( tipo == 1)
    {
        valor = area*50;
    }
    else
    {
        if (tipo==2)
        {
            valor = area*100;
        }
        else
        {
            if(tipo == 3){
                valor = area*150;
            }
            else
            {
                if (tipo == 4)
                {
                    valor = area*250;
                }
                
            }
        }
        
    }
       
        if (area > 1000)
        {
            valor = (valor) - (valor*0.05);
        }

        if(valor>750)
        {
            valor = valor - ((valor-750)*0.1);
        }

         
        printf("O valor a pagar é: %.2f", valor);
    

}