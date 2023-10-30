#include <stdio.h>
#include <stdlib.h>

const char* IMC (float, float);

void main(){
   float peso, altura;
   const char* r;
   printf("Digite seu peso: ");
   scanf("%f", &peso);
   printf("Digite sua altura: ");
   scanf("%f", &altura);

   r = IMC(peso, altura);

   printf("Grau de Obesidade: %s\n", r);

}

const char* IMC (float peso, float altura){
   float Massa;
   Massa = (peso/(altura*altura));
   if(Massa < 26){
      return "Normal";
   }
   else if(Massa >=26 && Massa < 30){
      return "Obeso";
   }
   else if(Massa >= 30){
      return "Obeso Mórbido";
   }
}