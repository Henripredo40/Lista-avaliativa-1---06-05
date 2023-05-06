#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

        setlocale(LC_ALL,"PORTUGUESE");



        double x1,x2,y1,y2,dist;


        printf("Digite o Repectivos Valor de x e y:\n");
        scanf("%lf %lf",&x1,&y1);

        printf("Digite o Repectivos Valor de x e y:\n");
        scanf("%lf %lf",&x2,&y2);

         dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));





        printf("\n%.4lf\n",dist);

        return 0;
}


/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:*/
