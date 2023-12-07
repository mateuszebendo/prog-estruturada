#include <stdio.h>
#include "1a.c"
#include "1b.c"
#include "1c.c"
#include "1d.c"
#include "1e.c"
#include "1f.c"


int main (){

	char copy [100], word [100];
	puts("Digite seu nome:");
	fgets(word, 100, stdin);
	
	printf("Seu nome e: %s \n", strcopy(word, copy));
	
	printf("Digite a primeira frase: ");
    fgets(word, 100, stdin);

    printf("Digite a segunda palavra: ");
    fgets(copy, 100, stdin);
	
	printf("A concatenacao do seus nome e: %s \n", strcat(word, copy));
	
	printf("O tamanho da segunda string e: %d bits \n", strlen(copy));
	
	printf("Tamanho da frase: %d \n-1 caso a primeira seja maior \n0 caso sejam iguais \n1 caso a segunda seja maior \n", strcmp(word, copy));

	touper(copy);
	printf("A segunda frase com maiusculas fica: %s \n", copy); 
	
	lower(word);
	printf("A primeira frase com minusculas fica: %s \n", word); 
	return 0;
};