#include<stdio.h>
#include<locale.h>
#include<math.h>


int main(){

        setlocale(LC_ALL,"PORTUGUESE");

        int r;

        double vol,pi = 3.14159,area;

        printf("Informe o valor do Raio:\n");
        scanf("%i",&r);


        vol = (4.0/3) * pi * pow (r,3);
        area = 4 * pi * pow(r,2);

        printf("\nÁREA DA SUPERFÍCIE É:\n%.2lf\n",area);
        printf("\nVOLUME DA ESFERA É:\n%.2lf\n",vol);




}


/* Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera
sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³. A
fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o
conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas
linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é
outro inteiro*/
