#include <stdio.h>

struct fracao { 
 float numerador; 
 float denominador;
}; 

float adicao (struct fracao x, struct fracao y){
	double resultado; 
	
	return resultado = ((x.numerador * y.denominador) + (y.numerador * x.denominador))/(x.denominador * y.denominador);
};

float subtracao (struct fracao x, struct fracao y){
	double resultado; 
	
	return resultado = ((x.numerador * y.denominador) - (y.numerador * x.denominador))/(x.denominador * y.denominador);
};

float multiplicacao (struct fracao x, struct fracao y){
	double resultado; 
	
	return resultado = x.numerador * y.numerador/(x.denominador * y.denominador);
};

float divisao (struct fracao x, struct fracao y){
	double resultado; 
	
	return resultado = x.numerador * y.denominador/(x.denominador * y.numerador);
};

int main (){
	struct fracao num1, num2; 
	
	puts("Digite o numerador e o denominador da primeira fracao: ");
	scanf("%f %f", &num1.numerador, &num1.denominador); 
	
	puts("Digite o numerador e o denominador da segunda fracao: ");
	scanf("%f %f", &num2.numerador, &num2.denominador); 
	
	 printf("Adicao: %f \n", adicao(num1, num2));
	 printf("Subtracao: %f \n", subtracao(num1, num2));
	 printf("Multiplicacao: %f \n", multiplicacao(num1, num2));
	 printf("Divisao: %f \n ", divisao(num1, num2));
	 
	 return 0;
};