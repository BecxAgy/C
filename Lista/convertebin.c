#include <stdio.h>

int main(){

    int num;
    int bin;

    printf("Insira um número MENOR que 32: \n");
    scanf("%i", &num);

    int binMil= (((num/16)%2)*10000);
    int binCent = (((num/8)%2)*1000);
    int binDez = (((num/4)%2)*100);
    int binUni = (((num/2)%2)*10);
    int bin01 = num%2;

    bin = binMil+binCent+binDez+binUni+bin01;

    printf("%i ", bin);

//30%2=0*1 ... 15%2= 1*10 ... 7%2= 1*100 .... 3%2= 1*1000 ... 1%2 = 1*1000

}
