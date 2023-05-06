#include <stdio.h>
#include<locale.h>

int main()
{

  float  media;
  int i,num;

  printf("---- Calculando a media-----\n\n");


  for (i = 1; i<=10; i++)
  {
    printf("Digite dez numero:[%i]\n",i);
    scanf("%i",&num);


    media = num / 2;



  }
    printf("\nMedia = %.2f\n",media);
    printf("------------------------------------------\n\n");

  return(0);
}
