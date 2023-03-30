#include<stdio.h>
#include<math.h>




int main(){
 float amostra[10],media_amostra,soma_amostra,cont_media,desvio_padrao,raiz_amostra,erro_padrao,resultado;
    int i;

    for(i=0; i < 10; i++){
    printf("Digite um numero de amostra: ");
    scanf("%f",&amostra[i]);
    soma_amostra += amostra[i];
    cont_media++;
    }

    media_amostra = soma_amostra/cont_media;
    printf("A media das amostras dos numeros digitados: %.2f \n",media_amostra);

    for(i=0; i < 10; i++){//for para gerar o resultado para calcular o desvio padrão
        resultado += pow((amostra[i] - media_amostra),2);
    }
    //calcular agora o n-1
    //Calcular o desvio padrao
    desvio_padrao = sqrt(resultado/(cont_media-1));
    printf("o Desvio padrao é:%.2f",desvio_padrao);
    //calcular o intervalo de confiança de 95%
    raiz_amostra = sqrt(cont_media);
    erro_padrao = desvio_padrao / raiz_amostra;



    return 0;
}