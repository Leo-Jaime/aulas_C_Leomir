#include<stdio.h>

int main(){
    float altura,maior_altura = 0, menor_altura=9;
    int cont= 0;

    for(cont= 0; cont < 3;cont++){
        printf("\nDigite Sua altura:\n");
        scanf("%f",&altura);
        if(altura > maior_altura){
            maior_altura = altura;
        }else if (menor_altura > altura){
            menor_altura = altura;
        }

    }
    printf("A maior_altura altura é: %.2f\n",maior_altura);
    printf("A menor altura é: %.2f\n",menor_altura);

}
