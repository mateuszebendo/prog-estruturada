#include <stdio.h>
#include <string.h>

int main (){
   FILE *entrada, *saida;
   int dia, mes, ano;
   float venda;
   char nome[50];

   entrada = fopen("./dados.txt", "r");
   saida = fopen("./saida.txt", "w");

   if(entrada == NULL){
      perror("Erro ao abrir arquivo.");
      return 2;
   }

   while(fscanf(entrada, "%d/%d/%d, ", &dia, &mes, &ano) == 3){
      fgets(nome, sizeof(nome), entrada);

      size_t len = strlen(nome);
      if(len > 0 && nome[len-1] == '\n')
         nome[len-1] = '\0';
      
      fclose(saida);
      long posicao_anteriro = ftell(entrada);
      fclose(entrada);
      printf("Cliente: %s, Data: %d/%d/%d \nValor da Venda Respectiva: ", nome, dia, mes, ano);
      scanf("%f", &venda);
      entrada = fopen("dados.txt", "r");
      fseek(entrada, posicao_anteriro, SEEK_SET);
      saida = fopen("saida.txt", "a");
      fprintf(saida, "Cliente: '%s', Data: %d/%d/%d, Venda: %f\n", nome, dia, mes, ano, venda);
   }

   fclose(entrada);
   fclose(saida);

   return 0;

}
