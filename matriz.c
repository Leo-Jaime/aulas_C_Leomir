#include<stdio.h>

int main(){

    int i,j;
    char matrix[3][3];

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nDigite o elemento da Linha: %d, Coluna: %d: ",i,j);
            scanf("%s",&matrix[i][j]);
        }
            }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("|  %c  ",matrix[i][j]);
        }
        printf("|\n");
    }
    

}