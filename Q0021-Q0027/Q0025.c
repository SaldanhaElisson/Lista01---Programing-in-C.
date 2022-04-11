# include <stdio.h>

int main(){
    int segundostTotal;
    int segundos;
    int minutos;
    int horas;


    printf("Digite a quantidade de segundos total: ;\n");
    scanf("%d", &segundostTotal);
    

    segundos = segundostTotal % 60;

    minutos = segundostTotal / 60;
    
    horas = minutos / 60;

    minutos = minutos % 60 == 0? minutos : minutos % 60;

    printf("%d segundos equivale: %d horas %d minutos e %d segundos \n", segundostTotal, horas, minutos, segundos); 
    
    return 0;
}