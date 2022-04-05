#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um numeror: \n");
    scanf("%d", &numero);

    printf("\n");
    printf("O antecessor do numero é: %d\n", numero-1);
    printf("O antecessor do numero é: %d\n", numero+1);


    return 0;
}