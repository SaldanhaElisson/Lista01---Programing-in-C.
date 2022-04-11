#include <stdio.h>
#include <math.h>

int main(){
    float numero1;
    float numero2;
    float numero3;

    float mediaAritmetica;
    float mediaGeometrica;
    float mediaAux;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: \n");
    scanf("%f", &numero2);
    
    printf("Digite o terceiro numero: \n");
    scanf("%f", &numero3);

    mediaAritmetica  = (numero1 + numero2 + numero3) / 3;
    printf("Media artimetica dos numeros é :  %.2f \n", mediaAritmetica );

    mediaAux = numero1 * numero2 * numero3;
    mediaGeometrica = pow(mediaAux, 1.0/3.0);

    printf("Media geometrica %.f \n", mediaGeometrica );

    return 0;
}