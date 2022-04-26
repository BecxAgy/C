#include <stdio.h>

/*
trit 2 = soma valor
trit 1 = faz nada
trit 0 = subtrai
*/

/*se num/1000 = 2*/

int main(){
    int num;
    int resultadoMil = 0;
    int resultadoCent = 0;
    int resultadoDez = 0;
    int resultadoUni = 0;
    int resultadoTrits;

    printf("Insira um número em TRITS (dígito de 2 a 0) para saber seu DECIMAL:");
    scanf("%i", &num);

    int numMil = num/1000;
    int numCent = (num%1000)/100;
    int numDez = (num%100)/10;
    int numUni = num%10;

    if (numMil == 2){
        resultadoMil = 27;
    }
    else if (numMil == 0)
        {
            resultadoMil = (-27);
        }     


    if (numCent == 2){
        resultadoCent = 9;
    }
    else if (numCent == 0){
        resultadoCent = (-9);
    }
              
    if (numDez == 2){
        resultadoDez = 3;
    }
    else if (numDez == 0){
        resultadoDez = (-3);
    } 
        
    
    if (numUni == 2){
        resultadoUni =  1;
    }
    else if (numUni == 0){
            resultadoUni = (-1);
    }  
        
    if (num>=1000)
    {
        resultadoTrits = resultadoMil+resultadoCent+resultadoDez+resultadoUni;
        printf ("%i \n", resultadoTrits);
    }
    else if (num >= 100){
        resultadoTrits = resultadoCent+resultadoDez+resultadoUni;
        printf ("%i \n", resultadoTrits);
    }
        else if (num>=10){
            resultadoTrits = resultadoDez+resultadoUni;
            printf ("%i \n", resultadoTrits);
        }   
            else if (num>=1){
            printf ("%i \n", resultadoUni);
            }   
           
} 

 
