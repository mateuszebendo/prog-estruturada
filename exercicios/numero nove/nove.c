#include <stdio.h> 
#include <stdlib.h>

int main (){
 struct TASCII{
	int codigo;
	char caractere;
 } ascii;
 FILE *arquivo; 
 char nomeArquivo[80];
 int count; 

 puts("Informe o nome (com caminho) do arquivo a ser analisado: ");
 gets(nomeArquivo);
 if(arquivo == NULL){
   puts("Arquivo inexistente");
   return 2;
 };
 arquivo = fopen(nomeArquivo, "rb");
 
 while(1){
	if(fread(&ascii, sizeof(struct TASCII), 1, arquivo)) count++;
	else if(feof(arquivo)) break;
 };	

 fclose(arquivo);
 printf("Este arquivo possui %d registros\n", count);

   return 0;
}