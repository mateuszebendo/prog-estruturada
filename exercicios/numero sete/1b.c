#include <stdlib.h>
char * strcat (char word1[], char word2[]){
	int j = 0, i = 0;
	char * con = malloc(sizeof(char)*200);
	
	 while (word1[i + 1] != '\0') {
        con[i] = word1[i];
        i++;
    }
	while (word2[j] != '\0') {
        con[i] = word2[j];
        i++;
        j++;
    }
	con[i] = '\0';

    return con;
};
