#include<stdio.h>
#include<locale.h>

int main(){

        setlocale(LC_ALL,"PORTUGUESE");

        int valor,valor2,valor3,valor4,produto;

        printf("Digite um Valor:");
        scanf("%i",&valor);
        printf("Digite um Valor:");
        scanf("%i",&valor2);
        printf("Digite um Valor:");
        scanf("%i",&valor3);
        printf("Digite um Valor:");
        scanf("%i",&valor4);


        produto = (valor * valor2) - (valor3 *valor3);

        printf("\n[valor de %i * valor de %i ] - [valor de %i * valor de %i]\n",valor,valor2,valor3,valor4);
        printf("\nValor da Diferença : %i\n",produto);


        return 0;
}
