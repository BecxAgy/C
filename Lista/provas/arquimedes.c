#include <stdio.h>

int main(){
    float peso1, peso2, comp1, comp2;

    printf("Qual peso da primeira criança?\n");
    scanf("%f", &peso1);
    printf("Qual o comprimento do lado da gangorra?\n");
    scanf("%f", &comp1);

    printf("Qual peso da segunda criança?\n");
    scanf("%f", &peso2);
    printf("Qual o comprimento do outra lado da gangorra\n");
    scanf("%f", &comp2);

    float calculo1 = peso1*comp1;
    float calculo2 = peso2*comp2;

    if (calculo1 == calculo2)
    {
        printf("A balança está em equilíbrio...");
    }else{
        if (calculo1 > calculo2)
        {
            printf("A balança vai tender para o lado um");
        }else{
 
            printf("A balança vai tender para o lado 2");
            
        }
        
        
    }
    
    }