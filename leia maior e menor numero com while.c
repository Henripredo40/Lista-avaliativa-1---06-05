#include<stdio.h>
#include<locale.h>

int main(){

        setlocale(LC_ALL,"PORTUGUESE");

         int num,menor,maior;

         	//maior = numero;
            //menor = numero;

        while(num >= 0){

        printf("Insira Um numero:\n");
        scanf("%i",&num);

        if(num > maior){
            maior = num;

            }
        if(num < menor ){
        menor = num;
            }

        }

        printf("\n%i",maior);
        printf("\n%i\n",menor);


        return 0;

}
