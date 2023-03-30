#include<stdio.h>
#include<math.h>

int main(){
 float dados[10],media,soma,cont_media,desvio_padrao,raiz_amostra,erro_padrao,result,result2,result3;
    int i;
    for(i=0; i < 10; i++){
    printf("\nDigite um numero:");
    scanf("%f",&dados[i]);
    soma += dados[i];
    cont_media++;
    }
    media = soma/cont_media;
    printf("A media dos numeros digitados: %f \n",media);
    // Daqui para cima calcula a Media
    //calcular raiz e elevar o numero ao 0,5
    //calcular a raiz quadrara usar o metodo sqrt() do math
    for(i=0; i < 10; i++){//for para gerar o resultado para calcular o desvio padrão
        result = dados[i] - media;
        result2 += pow(result,2);

    }
    //calcular agora o n-1
    result3 = result2/(cont_media-1);;
    //Calcular o desvio padrao
    desvio_padrao = sqrt(result3);
    printf("o Desvio padrao é:%f",desvio_padrao);
    //calcular o intervalo de confiança de 95%
    raiz_amostra = sqrt(cont_media);
    erro_padrao = desvio_padrao / raiz_amostra;



    return 0;
}