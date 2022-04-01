#include <stdio.h>

int main(){
    float comprimento;
    float largura;
    float altura;
    float volume;


    printf("======VOLUME====== \n");

    printf("Digite o comprimento da caixa: ");
    scanf("%f", &comprimento);
    
    printf("Digite o Largura da caixa: ");
    scanf("%f", &largura);

    printf("Digite o altura da caixa: ");
    scanf("%f", &altura);

    volume = comprimento * altura * largura;

    printf("O volume total da caixa é: %.2f \n", volume);

    return 0;
}