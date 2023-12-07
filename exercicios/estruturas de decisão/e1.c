#include <stdio.h>
#include <stdlib.h>

int Analise (int);

void main (){

   int num, r;
   printf("Digite um valor qualquer: ");
   scanf("%d", &num);

   r = Analise(num);

   if(r > 0){
      printf("O valor é positivo \n");
   }
   if(r < 0){
      printf("O valor é negativo \n");
   }
   if(r == 0){
      printf("O valor é nulo \n");
   }
}

int Analise (int num){
   if(num > 0){
      return 1;
   }
   if(num < 0){
      return (-1);
   }
   else{
      return 0;
   }
}