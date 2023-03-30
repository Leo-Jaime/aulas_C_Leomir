#include<stdio.h>

int main(){
    int cont;
    float numero1,numero2,pa;
    printf("Digite o Primeiro numero: ");
    scanf("%f",&numero1);
    printf("\nDigite a Razao R: ");
    scanf("%f",&numero2);
    pa = numero1;
    for (cont = 1; cont <= 10; cont++)
    {
        pa += numero2;
        printf("%.f, ",pa);
    }
    


}