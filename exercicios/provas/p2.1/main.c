#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
struct _TPonto_
{
float x;
float y;
};

typedef struct _TPonto_ TPonto;
void pi_MonteCarlo (int semente, int dardos, FILE * arquivo);
void transfereDeArquivoParaVetor (FILE * arquivo, TPonto v[], int tamanho);
float distancia (TPonto p);
int dardosNoQuartoDeCirculo (TPonto v[], int tamanho, float raio);
void criaLog (FILE * arquivo, TPonto v[], int pontosNoAlvo, int totalDePontos);
int main()
{
FILE * arquivo;
TPonto * pontos;
int totalDeDardos, dardosNoAlvo, semente;

printf("QUANTIDADE DE DARDOS: ");
scanf("%d", &totalDeDardos);
pontos = (TPonto *)malloc(sizeof(TPonto[totalDeDardos]));
semente = time(NULL);
pi_MonteCarlo (semente, totalDeDardos, arquivo);
transfereDeArquivoParaVetor (arquivo, pontos, totalDeDardos);
dardosNoAlvo = dardosNoQuartoDeCirculo(pontos, totalDeDardos, 1.0);
criaLog(arquivo, pontos, dardosNoAlvo, totalDeDardos);
free(pontos);
return 0;
}
//Gera pontos em uma área correspondente a um quadrado de lado 1
//com vértices nos pontos (0,0) , (0,1) , (1,1) e (1,0).
//Grava esses pontos em um arquivo binário.
void pi_MonteCarlo (int semente, int dardos, FILE * arquivo)
{
TPonto p;
int i;
//Abre um arquivo binário para escrita.
arquivo = fopen("pontos.dat", "wb+");
//Estabelece uma raiz para a geração de números aleatórios.
srand(semente);
for (i=0; i<dardos; i++)
{
//Sorteia valores de 0 a 1 para x e para y de um ponto.
p.x = 1.0 * rand() / RAND_MAX;
p.y = 1.0 * rand() / RAND_MAX;
//Escreve um registro do tipo TPonto no aqruivo.
fwrite(&p, sizeof(TPonto), 1, arquivo);
}
//Fecha o arquivo.
fclose(arquivo);
}

void transfereDeArquivoParaVetor (FILE *arquivo, TPonto v[], int tamanho){
	
	//Abre arquivo binário
	arquivo = fopen("pontos.dat", "rb");
	
	//Volta ponteiro para o início do arquivo
	rewind(arquivo);
	
	for(int i = 0; i < tamanho; i++){
		fscanf(arquivo,"%f %f", &v[i].x, &v[i].y);
	};
	
	fclose(arquivo);
}


void criaLog (FILE *arquivo, TPonto v[], int pontosNoAlvo, int totalDePontos){
	
	arquivo = fopen("log.txt", "w+");
	fprintf(arquivo, "PONTOS OBTIDOS: \n");
	
	int i = 0;
	while(fprintf(arquivo, "( %f , %f ) \n", v[i].x, v[i].y); 
	
	fprintf(arquivo, "TOTAL DE DARDOS ARREMESSADOS ------> %d \n", pontosNoAlvo);
	fprintf(arquivo, "TOTAL DE DARDOS NO QUARTO DE CIRCULO ------> %d \n", totalDePontos);
	fprintf(arquivo, "TOTAL DE DARDOS ARREMESSADOS ------> 3.138452 \n");
	
	fclose(arquivo);
	
}

float distancia (TPonto p){
	float r1;
	r1 = (p.x * p.x) + (p.y * p.y);
	return (sqrt(r1));
}

int dardosNoQuartoDeCirculo (TPonto v[], int tamanho, float raio){
	// Para que um ponto (x, y) esteja dentro de um círculo de raio r, é preciso que a distância desse ponto ao centro do círculo seja menor ou igual a r
	int result = 0;
	for(int i = 0; i < tamanho; i++) if(distancia(v[i]) <= raio) result ++;
	return result;
};