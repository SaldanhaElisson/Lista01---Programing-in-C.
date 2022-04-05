#include <stdio.h>

int main(){
    float temperatura;
    float fahrenheit;

    printf("Digite a temperatura em graus Celisus: \n");
    scanf("%f", &temperatura);

    fahrenheit = (temperatura * 9 + 160 ) / 5;

    printf("A temperatura %.2f °C  em Fahrenheit é: %.2f \n", temperatura, fahrenheit) ;

    return 0;
}