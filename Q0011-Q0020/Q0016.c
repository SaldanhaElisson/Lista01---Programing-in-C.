# include <stdio.h>

int main(){
    float horaAula;
    float horasTrabalhadas;
    float descontoINSS;
    float salario;
    float salarioLiquido;

    printf("Digite o valor da hora aula: \n");
    scanf("%f", &horaAula);


    printf("Digite o total de horas trabalhadas: \n");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o percentual de desconto do INSS: \n");
    scanf("%f", &descontoINSS);

    salario = horaAula * horasTrabalhadas;

    salarioLiquido = salario - (salario * descontoINSS)/100;
    //(salario * descontoINSS)/100 -> ao salario - o desconto do INSS

    printf("O salario bruto é:  R$ %.2f \n", salario);
    printf("O salario liquido é:  R$ %.2f \n", salarioLiquido);

    return 0;

}