#include <stdio.h>

/*Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro
Gasolina Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser 
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro 
do álcool é R$ 1,90*/


int main(){
    float litro;
    float alc, gas;

    
    printf("Insira a quantidade de litros \n");
    scanf("%f", &litro);

    if (litro > 25)
    {
        alc = (litro*1.90)-((litro*1.90)*0.04);
        gas = (litro*2.70) - ((litro*2.70)*0.05);

        printf("O valor do Álcool é %.2f \n", alc);
        printf("O valor da Gasolina é %.2f \n", gas);
    }
    else{
        alc = (litro*1.90)-((litro*1.90)*0.02);
        gas = (litro*2.70) - ((litro*2.70)*0.03);

        printf("O valor do Álcool é %.2f", alc);
        printf("O valor da Gasolina é %.2f", gas);
    
    }
    
}
