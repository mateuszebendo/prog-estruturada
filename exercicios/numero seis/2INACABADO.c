#include <stdio.h>
#include <stdlib.h>

int* multVector (int * str1){
	int lenght = 0, i = 0;
	
	while(*(str1 + i) != '\0') lenght++, i++;
	
	int * result = (int*)malloc(sizeof(int)*lenght);
	i = 0;
	
	while(*(str1 + i) != '\0'){
		*(result + i) = str1[i] * i;
		i++;
	}
	
	*(result + i) = '\0';
	
	return result;
	
}

int main (){
	int * str = (int*)malloc(sizeof(int)*3);
	int i = 0;
	while(i < 3){
		printf("Digite o elemento %d: ", i);
		scanf("%d", &str[i]);
		i++;
	};
	printf("Resultado: %d", multVector(str));
	
	return 0;
};