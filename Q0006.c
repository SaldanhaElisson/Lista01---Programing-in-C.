#include <stdio.h>

int main(){
    char sexo;
    float altura;
    float pesoIdeal;

    printf("Digite o seu sexo [M/F]:\n");
    scanf("%c", &sexo);

    int validandoMaiscula = !(sexo == 'M' && sexo == 'F');
    int validandoMinuscula= !sexo == 'm' && !sexo == 'f';
    

    printf("%d", validandoMaiscula);

    printf("\n");
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    switch(sexo){
        case 'M':
            pesoIdeal = 72.7 * altura - 58;
            break;
        case 'F':
            pesoIdeal = 62.1 * altura - 44.7;
            break;
         case 'm':
            pesoIdeal = 72.7 * altura - 58;
            break;
        case 'f':
            pesoIdeal = 62.1 * altura - 44.7;
            break;    
        default:
            printf("valor invalido, tente novamente");
    }

    printf("\n");
    printf("O peso ideal para você: %2.f\n", pesoIdeal);

    return 0;
}