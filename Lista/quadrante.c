#include <stdio.h>

int main(){
    int x;
    int y;
    
    printf("Insira o valor de X: \n");
    scanf("%i", &x);

    printf("Insira o valor de Y: \n");
    scanf("%i", &y);


    if(x > 0 && y > 0)
    {
        printf("As coordenadas se encontram no primeiro quadrante\n");
    }

    if (x < 0 && y > 0)
    {
        printf("As coordenadas estão no segundo quadrante\n");
    }

    if (x<0 && y<0)
    {
        printf("As coordenadas estão no terceiro quadrante\n");
    }

    if (x>0 && y<0)
    {
        printf("As coordenadas estão no quarto quadrante\n");

    }
    if (x == 0 && y==0)
    {
        printf("Está localizado na origem\n");
    }
    
    if (x==0 && y != 0)
    {
        printf("Está no eixo y\n");
    }
    if (y==0 && x !=0)
    {
        printf("Está no eixo x\n");
    }
    
    
    
    

    
   
}