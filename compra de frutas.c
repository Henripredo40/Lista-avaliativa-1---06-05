#include<stdio.h>
#include<locale.h>

int main(){

        setlocale(LC_ALL,"PORTUGUESE");

        int opc,sair;
        int quant;
        float total;




    printf("|          Verdurao         |\n");
    printf("|                           | \n");
    printf("|            FRUTAS         |     \n");

    printf(" \n1 : Abacaxi - 5,00 a unidade");
    printf("\n2 : Maça - 1,00 a unidade");
    printf("\n3 : Pera - 4,00 a unidade\n");
    printf("4 : Voltar ao Menu\n");




        do{




    printf("\nEscolha qual opçoes Você deseja:");
    scanf("%i",&opc);



        switch(opc){

        case 1:


        printf("\nEscolha a quantidade que deseja comprar :");
        scanf("%i",&quant);
        printf("COMPRA CONCLUIDA!\n");
        total += quant * 5;
        //total = total + quant * 5;

        break;

        case 2:


        printf("\nEscolha a quantidade que deseja comprar :");
        scanf("%i",&quant);
        printf("\nCOMPRA CONCLUIDA!\n");
        total += quant * 1;

        break;

        case 3:

        printf("\nEscolha a quantidade que deseja comprar :");
        scanf("%i",&quant);
        printf("\nCOMPRA CONCLUIDA!\n");
        total += quant * 4;

        break;

        case 4:



    printf("\n|          Verdurao         |\n");
    printf("\n|                           | \n");
    printf("\n|            FRUTAS         |     \n");

    printf(" \n1 : Abacaxi - 5,00 a unidade");
    printf("\n2 : Maça - 1,00 a unidade");
    printf("\n3 : Pera - 4,00 a unidade\n");
    printf("4 : Voltar ao Menu\n");

        break;


        default:
        printf("\n Opçâo Invalida!\n");

        break;

        }


        printf("\nDigite 0 para continuar , 1 para sair:");
        scanf("%i",&sair);


        }while(sair == 0);

        printf("\nValor total: %.2f\n",total);

}

/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade*/
