#include <stdio.h>

int main(){
    float valorEmReal;
    float valorEmDolar;
    float taxaDeConversao;

    printf("Digite a taxa de conversão do dólar para reais: \n") ;
    scanf("%f", &taxaDeConversao);

    printf("Digite a quantidade de de dinheiro em Reais que você quer conveter para dólar: \n");
    printf("R$ ");
    scanf("%f", &valorEmReal);

    valorEmDolar = valorEmReal / taxaDeConversao;

    printf("O valor R$ %.2f reais em dólar é: $ %.2F doláres \n", valorEmReal, valorEmDolar);

    return 0;
}