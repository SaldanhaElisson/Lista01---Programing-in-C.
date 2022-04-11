#include <stdio.h>
#include <math.h>


int main(){
    int ponto1X;
    int ponto1Y;
    float distancia;
    int ponto2X;
    int ponto2Y;
    int paraRaiz;

    printf("Digite o X do primeiro ponto no plano cartesiano \n");
    scanf("%d", &ponto1X);

    printf("Digite o y do primeiro ponto no plano cartesiano \n");
    scanf("%d", &ponto1Y);

    printf("Digite o X do segundo ponto no plano cartesiano \n");
    scanf("%d", &ponto2X);

    printf("Digite o Y do segundo ponto no plano cartesiano \n");
    scanf("%d", &ponto2Y);

    
    paraRaiz = (ponto2X - ponto1X) ^ 2 + (ponto2Y - ponto1Y) ^ 2;
    distancia = sqrt(paraRaiz);
    printf("%.2f", distancia);


    return 0;
}