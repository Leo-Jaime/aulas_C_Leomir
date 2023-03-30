#include<stdio.h>

int main(){
    float num,sum;
    int cont,repeticao;

    printf("Informe a quantidade de repetição:");
    scanf("%d",&repeticao);

    for(cont=0;  cont < repeticao;cont++){
        printf("\ndigite numeros aleatorios:");
        scanf("%.2f",&num);
        sum += num;
    }
    printf("\nA media aritmetica e: %f",sum/cont); // media aritmetica






}