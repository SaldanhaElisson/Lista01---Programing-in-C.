#include <stdio.h>


int main(){
    char string[3];

    printf("Digite um numero de três digitos \n");
    scanf("%s", string);


    printf("O caractere representado em inteiro é: %c%c%c \n" , string[2], string[1], string[0]);

    return 0;
}