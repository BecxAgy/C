#include <stdio.h>

int main(){
    int ano;
    int bissexto;

    

    printf("Qual ano você deseja descobrir se é bissexto:\n");
    scanf("%i",  &ano);

    if (ano%4==0)
    {
        bissexto = 0;
    }
    if (ano%100==0 )
    {
        bissexto = 1;
    }
    if (ano%400==0)
    {
        bissexto = 0;
    }

    if (bissexto==0)
    {
        printf("O ano é bissexto");
    }else
    {
       printf("O ano não é bissexto");
    }
    
    
    
    
}   
    
    

