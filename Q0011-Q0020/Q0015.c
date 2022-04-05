#include <stdio.h>

int main(){

    unsigned int diasTrabalhados;
    float salarioTotal;
    char nomeDoVendedor;

    
    printf("Digite o nome do Vendedor: \n");
    scanf("%c", &nomeDoVendedor);

    printf("\n");
    
    printf("Digite o total de dias trabalhados: \n");
    scanf("%d", &diasTrabalhados);


    // 50.25 -> Salário da empresa por dia
    if(diasTrabalhados <= 10){
        salarioTotal = 50.25 * diasTrabalhados * 0.90;
    } else if(diasTrabalhados > 10 && diasTrabalhados <= 20 ){
        salarioTotal = 50.25 * diasTrabalhados * 1.2* 0.90;
    } else if(diasTrabalhados > 20){
        salarioTotal = 50.25 * diasTrabalhados * 1.3* 0.90;
    }

    printf("Salario total de %c é: R$ %.2f \n", nomeDoVendedor, salarioTotal);

    return 0;
}