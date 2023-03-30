#include<stdio.h>

int main(){
int numeros,num_par,num_impar,cont_par,cont_num,total_numeros,mediar_par,media_total;
cont_par = 0;
numeros = 1;
while (numeros != 0){
    printf("\nDigite um numero:");
    scanf("%d",&numeros);
    total_numeros+=numeros;
    cont_num++;
    if (numeros %2 == 0 && numeros != 0){
        num_par+=numeros;
        cont_par++;
    }else if(numeros != 0){
        num_impar++;
    }


} 
media_total = total_numeros/cont_num;
mediar_par = num_par/ cont_par;
printf("Media dos valores pares %d\n",mediar_par);
printf("Media total dos numeros e %d\n",media_total );
printf("A quantidade de numeros pares: %d\n",cont_par);
printf("A quantidade de numeros impares: %d\n",num_impar);




}