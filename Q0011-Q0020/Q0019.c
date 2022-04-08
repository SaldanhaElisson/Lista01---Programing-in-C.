# include <stdio.h>

int main(){

    char colunasComAstericos;
    //Matriz 10 * 17

    //Desenhando o Quadrado
    for(int l = 1; l < 18; l++){
        for(int c = 1; c < 10; c++){

            // verificandop se é a primeira linha ou a ultima
            if( l == 1 || l == 17 ){
                printf("*");
                continue;
            }

            colunasComAstericos = c == 1 || c == 9 ? 1 : 0;

            if(colunasComAstericos){
                printf("*");
            }else{
                printf(" ");
            }  
        }
        printf("\n");
    }

    // Desenhando o circulo
    for(int l = 1; l < 8; l++){
        for(int c = 1; c < 8; c++){

            // primeira condição
            if ( (l == 1 || l == 7) && c > 2 && c < 6){
                printf("*");
            } else{
                printf(" ");
            }

            // segunda condição

            if ( (l == 2 || l == 6) && ( c == 2 || c ==4)){
                printf("*");
            } else{
                printf(" ");
            }

            //terceira condição
            if(( c == 1 || c == 7) && ( l > 2 && l < 6)){
                printf("*");
            } else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}