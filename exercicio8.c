#include<stdio.h>

int main(){
    float numero,razao,pg;
    int cont;

    printf("Digite um Numero: ");
    scanf("%f",&numero);
    printf("\nDigite a Razao r: ");
    scanf("%f",&razao);
    pg = numero;
    for(cont = 1; cont <=10; cont++){
        pg *= razao;
        printf("\n A Razao geometrica:%.f ",pg); 
    }

}