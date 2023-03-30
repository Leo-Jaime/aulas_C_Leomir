#include<stdio.h>

int main(){
int valor,soma;
for(valor = 1; valor < 500; valor+=2){
	if (valor%3 == 0){
		printf("%d\n",valor);
		soma += valor;
	}
}
printf("%d",soma);

}