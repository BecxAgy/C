#include <stdio.h>

int main(){
    char letra;
    int num;
    
    


    printf("Insira uma letra para saber se é vogal ou consoante!!");
    scanf("%c", &letra);

    if (num ==0||num ==1||num ==2||num ==3||num ==4||num ==5||num ==6||num ==7||num ==8||num ==9)
    {
        printf("É numero");
    }

    if (letra=='a' || letra=='e' ||letra=='i' ||letra=='o' ||letra=='u' ||letra=='A' ||letra=='E' ||letra=='I' ||letra=='O' ||letra=='U'){
    
        printf("É vogal");
    }
    else{
        printf("É consoante");
    }


   
    

     
}