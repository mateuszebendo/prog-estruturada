#include <stdio.h>
#include <stdlib.h>

float ConvFahr (float);

void main (){

	float celsius, fahr;

	printf("Digite um valor em Celsius: ");
	scanf("%f", &celsius);
	fahr = ConvFahr(celsius);
	printf("Esse valor equivale a %f fahrenheit", fahr);
	getchar();

}

float ConvFahr (float celsius){

	float r;
	r = 1.8*celsius+32;
	return r;

}
