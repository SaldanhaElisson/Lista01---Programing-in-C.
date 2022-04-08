#include <stdio.h>

int main(){
    int numero;
    int parOrImpar;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    parOrImpar = numero % 2;

    switch(parOrImpar){
        case 0:
            printf("O numero é Par\n");
            break;
        default:
            printf("O numero é Impar\n");
            break;
    }

    return 0;
}   