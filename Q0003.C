#include <stdio.h>

int main(){
    float numeroRealComVirgula;

    printf("Digite um numero que pertença ao conjunto real: \n");
    scanf("%f", &numeroRealComVirgula);

    printf("Numero lido com apenas uma casa decimal: % .1f \n", numeroRealComVirgula);

    return 0;
}