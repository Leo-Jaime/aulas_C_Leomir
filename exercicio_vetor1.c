#include<stdio.h>

int main()
{   
    int i,j=0,k=0,vetor[10];
    int tamanho = sizeof(vetor) / sizeof(int);
    int pares[tamanho],impares[tamanho];
    for (i = 1; i <= tamanho; i++)
    {
        printf("\nDigite o Elemento da posicao %d:",i);
        scanf("%d",&vetor[i]);
        if (vetor[i] % 2 == 0){
            pares[j] = vetor[i];
            j++;
        }else{
            impares[k] = vetor[i];
            k++;
        }       
    }

    

    printf("Os numeros pares: ");
        for ( i = 1; i < tamanho; i++)
        {
            printf("%d ",pares[i]);
        }
    printf("Os numeros impares: ");
        for ( i = 1; i < tamanho; i++)
        {
            printf("%d ",impares[i]);
        }
return 0;
}