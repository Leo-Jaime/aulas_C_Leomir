#include<stdio.h>

int main (){
    int numero,cont,resultado;
    printf("Digite Um numero para Exibir a Tabuada:");
    scanf("%d",&numero);
    for(cont = 1; cont <=10; cont++){
        resultado = cont * numero;
        printf("\n%d x %d = %d",cont ,numero, resultado );
    }


}