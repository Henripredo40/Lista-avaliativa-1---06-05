#include<stdio.h>
#include<locale.h>

int main(){

        setlocale(LC_ALL,"PORTUGUESE");


        double x,y;

    printf("Informe as coordenadas dos pontos Y e X:\n");
    scanf("%lf %lf",&x,&y);


        if (x == 0.0 && y == 0.0){

            printf("\nOrigem\n");
                }
            else if (y == 0) {
            printf("\nEixo y\n");
                    }
            else if(x == 0){
            printf("\nEixo x\n");
                        }
            else if(x > 0 && y > 0){
            printf("\nQ1\n");
                            }
            else if (x > 0 && y < 0){
            printf("\nQ2\n");
                                }
            else if(x < 0 && y < 0){
            printf("\nQ3\n");
                                        }
            else if(x > 0 && y < 0){
            printf("\nQ4\n");
                                            }

        return 0;
}


/*

Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou
“Eixo Y”, conforme for a situação.


*/
