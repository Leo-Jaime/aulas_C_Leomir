#include<stdio.h>

void falar(){
    return printf("Eu estou funcionando!\n");
}

int somar(int x, int y){
    int resultado = x + y;
    return resultado;
}

dividir(int dividendo, int divisor, int quociente){
    if (divisor == 0 || dividendo ==0){
        return printf("Divisao por 0!!!ERRO!!!\n");    
    }else{
        return printf("Divisao bem sucedida!!!\n");
    }

}



int main(){
    falar();
    printf("%d\n",somar(10,10));
    printf("%c", dividir(10,2,2));
    printf("%c", dividir(0,2,2));


return 0;

}