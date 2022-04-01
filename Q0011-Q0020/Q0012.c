#include <stdio.h>

int main(){

    unsigned int  numero1;
    unsigned int numero2;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);

    printf("A diferença entre os números: %d \n", numero1 - numero2);
    printf("A soma entre os números: %d \n", numero1 +  numero2);
    printf("O produto entre os números é: %d \n", numero1 * numero2);
    printf("O quociente entre os números é: %d \n", numero1/numero2);
    printf("O resto da divisão entre os números é: %d \n", numero1 % numero2);


    return 0;
}