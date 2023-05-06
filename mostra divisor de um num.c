#include<stdio.h>
#include<locale.h>

int main(){

            setlocale(LC_ALL,"PORTUGUESE");

            int num,div;


            printf("INFORME UM NÚMERO POSITIVO:\n");
            scanf("%i",&num);


            for(div = 1; div <= num ; div++){

            if(num%div==0){
            printf("Os Dividores do Número São:%i\n",div);
            }



            }







}
