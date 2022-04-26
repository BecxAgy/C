#include <stdio.h>

 /*- O código de confirmação de uma transação bancária é calculada considerando os quatro dígitos 
 finais do cartão e o horário da transação no formato HHMM. Para o cálculo, são gerados dois números
considerando para o primeiro os maiores numerais de cada posição, e para o segundo o menor
númeral de cada posição. Em seguida, o menor número é subtraído do maior e seu invertido é gerado. 
Este último valor é o código de confirmação da transação.
Por exemplo, para o cartão 4392 e uma transação realizada às 12:15, o código de confirmação será
igual a 3813; calculado da seguinte forma: 4395 - 1212 = 3183, que quando invertido, gera o número
3813.
Escreva um programa em C, que leia um número de quatro dígitos do cartão e um outro representando o 
horário no formato HHMM e imprima o código de confirmação calculado
*/
 

int main (){
    int digitos;
    int hora;

    printf("Qual os últimos 4 dígitos do seu cartão\n");
    scanf("%i", &digitos);

    printf("Qual o horário neste exato momento formato (HHMM)?\n");
    scanf("%i", &hora);

    int digitoMil = digitos/1000;
    int digitoCent =  (digitos%1000)/100;
    int digitoDez= (digitos%100)/10;
    int digitoUni = digitos%10;

    int horaH = hora/1000;
    int horaH2 = (hora%1000)/100;
    int minM = (hora%100)/10;
    int minM2 = hora%10;
    

    int milMaior, centMaior, dezMaior, uniMaior;
    int milMenor, centMenor, dezMenor, uniMenor;


    if (digitoMil<horaH)
    {
        milMenor = digitoMil;
        milMaior = horaH;

    }else{
        milMenor = horaH;
        milMaior = digitoMil;
    }
    
    if (digitoCent<horaH2)
    {
        centMenor = digitoCent;
        centMaior = horaH2;
    }else{
        centMenor = horaH2;
        centMaior = digitoCent;
    }
        
    if (digitoDez<minM)
    {
        dezMenor = digitoDez;
        dezMaior = minM;

    }else{
        dezMenor = minM;
        dezMaior = digitoDez;
    }
    if (digitoUni<minM2)
    {
        uniMenor = digitoUni;
        uniMaior = minM2;
        
    }else{
        uniMenor = minM2;
        uniMaior = digitoUni;
    }
    int digMaior= (milMaior*1000)+(centMaior*100)+(dezMaior*10)+uniMaior;

    int digMenor= (milMenor*1000)+(centMenor*100)+(dezMenor*10)+uniMenor;

    printf("dig maior %i \n", digMaior);
    printf("digito menor %i\n", digMenor);

    int sub = digMaior - digMenor;

    printf("A subtração %i\n", sub);

    int iMil = sub/1000;
    int iCent = (sub%1000)/100;
    int iDez= (sub%100)/10;
    int iUni = sub%10;

    int inverso = (iUni*1000)+(iDez*100)+(iCent*10)+iMil;
    printf("Tome a porra do seu código de confirmação, sua desgraça %i \n", inverso);
    
      
}