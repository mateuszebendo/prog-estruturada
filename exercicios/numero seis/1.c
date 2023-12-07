#include <stdio.h> 

void invertVector (char str1[], char str2[]){
	int j = -2, i = 0;
	
	while(str1[i] != '\0'){
		i++;
		j++;
	};
	
	i = 0;
	
	while(str1[i + 1] != '\0'){
		str2[i] = str1[j];
		i++;
		j--;
	};
	str2[i] = '\0';
};

void invertPointer (char *str1, char *st2){
	int j = -2, i = 0;
	
	while(*(str1 +i) != '\0'){
		i++;
		j++;
	};
	
	i = 0;
	
	while(*(str1 +i+1) != '\0'){
		*(str2 + i)= *(str1 + j);
		i++;
		j--;
	};
	*(str2 + i) = '\0';
};

int main (){
	char str1[50], str2[50];
	
	puts("Digite uma frase: ");
	fgets(str1, 50, stdin);
	
	invertVector(str1, str2);
	
	printf("A frase invertida fica: %s \n", str2);
	
	return 0;
};