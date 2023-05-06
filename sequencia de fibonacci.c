#include<stdio.h>
#include<locale.h>

int main(){

        setlocale(LC_ALL,"PORTUGUESE");

        int num , A = 1 , B  , soma;

        printf("Quantos termos da sequencia de Fibonacci querem ver? ");
        scanf("%i", &num);


        printf("\n0 ");


        while(num){

        printf("%i ", A);
		soma = A;
		A = A + B;
		B = soma;
		num--;

        }

        printf("\n\n");

	return 0;









}

/*
Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

*/
