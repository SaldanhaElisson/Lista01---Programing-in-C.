# include <stdio.h>

int main(){
    int aux;
    int valor1 = 1;
    int valor2 = 2;

    printf("valor 1: %d\n", valor1); 
    printf("valor 2: %d\n", valor2);

    aux = valor1;
    valor1 = valor2;
    valor2 = aux;
    printf("\n");
    printf("valor 1: %d\n", valor1); 
    printf("valor 2: %d\n", valor2);

    return 0;
}