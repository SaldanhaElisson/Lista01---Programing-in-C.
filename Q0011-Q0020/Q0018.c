#include <stdio.h>
#define PI 3.14159


int main(){
    unsigned int raio;
    unsigned int diametro;
    float circunferencia;
    float area;

    printf("Digite o raio do Circulo: \n");
    scanf("%u", &raio);



    diametro = 2*raio;
    circunferencia = 2 * PI * raio;
    area =  raio * raio * PI;
    
    printf("DIAMETRO: %u \n", diametro);
    printf("CIRCUFERÊNCIA: %.2f \n", circunferencia);
    printf("AREA: %.2f \n", area);

    return 0;
}
