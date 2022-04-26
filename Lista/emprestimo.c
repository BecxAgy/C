#include <stdio.h>

/*34. Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do 
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da 
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa 
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o 
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou 
não ser concedido*/

int main(){
    float renda;
    float emprest;
    float qParcela;
    

    printf("Insira sua renda mensal:\n");
    scanf("%f", &renda);

    printf("Insira o valor total do empréstimo solicitado\n");
    scanf("%f", &emprest);

    printf("Em quantas vezes você irá parcelar o empréstimo?\n");
    scanf("%f", &qParcela);

    float prestacao = emprest/qParcela;

    //se emprestimo for até 10 vezes o valor da renda mensal, execute, senão dê erro

    if(emprest<=(10*renda) && prestacao<=(renda*0.3))
    {
        printf("O empréstimo poderá ser concedido");
    }else{
        printf("o empréstimo não poderá ser concedido");
    }
    
}