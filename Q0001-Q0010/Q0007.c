#include <stdio.h>

int main(){
    int minutos;
    int horas;
    int segundos;

    int totalDeSegundos;

    printf("Digite as horas: \n");
    scanf("%d", &horas);    

    printf("Digite os minutos: \n: ");
    scanf("%d", &minutos);

    printf("Digite os segundos:  \n: ");
    scanf("%d", &segundos);

    totalDeSegundos = ((horas * 60) * 60)  +  (minutos * 60) + segundos;
    
    printf("O total de segundo é: %d \n", totalDeSegundos);
    return 0;
}