#include<stdio.h>


int main(){
    int i,vetor[15];
    printf("========Tabela=========\n");
    for (i = 0; i <= 15; i++)
    {
        printf("\nDigite o Elemento da posicao %d:",i);
        scanf("%d",&vetor[i]);
    }

    for(i = 0; i <= 15; i++)
    {
        printf("Elemento da posicao %d e : %d \n",i,vetor[i]);
    }

}