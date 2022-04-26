#include <stdio.h>
/*Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um 
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo 
que a média é 70. 
Classificação: A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações*/

int main(){
    float nota1, nota2, nota3, nota4, nota5;
    
    printf("Insira a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Insira a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Insira a terceira nota:\n");
    scanf("%f", &nota3);

    printf("Insira a quarta nota:\n");
    scanf("%f", &nota4);

    printf("Insira a quinta nota:\n");
    scanf("%f", &nota5);

    float class=(nota1+nota2+nota3+nota4+nota5)/5;

    if (nota1>=70 &&  nota2>=70 &&  nota3>=70 &&  nota4>=70 &&  nota5>=70)
    {
       printf("Você conseguiu a classificação A! \n");
       printf("Parabéns! Sua nota foi %.2f \n", class);
    }

    else{

            if (nota1>=70 &&  nota2>=70 &&  nota4>=70 && (nota3<70 || nota5<70))
            {
            printf("Você conseguiu a classificação B! \n");
            printf("Você está no caminho! Sua nota foi %.2f \n", class);
            
            }
            else
            {
            
                if (nota1>=70 &&  nota2>=70 && nota3>=70 && (nota5<70 || nota4<70))
                {
                    printf("Você conseguiu a classificação C!\n");
                    printf("Sua nota foi %.2f", class);
                }
             
                else
                {
                    printf("Você foi reprovado :(");
                    printf("Sua nota foi %.2f", class);
                }
            }
        
    }

    
}
