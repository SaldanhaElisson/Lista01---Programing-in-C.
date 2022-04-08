# include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Digite um numero \n");
    scanf("%d", &numero);
    
    printf(" Seu module é: %d \n", abs(numero));
    return 0;
};