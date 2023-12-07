
void criaLog (FILE *arquivo, TPonto v[], int pontosNoAlvo, int totalDePontos){
	
	arquivo = fopen("log.txt", "w+");
	fprintf(arquivo, "PONTOS OBTIDOS: \n");
	
	int tamanho = sizeof(v) / sizeof(v[0]);
	for(int i = 0; i < tamanho; i++){
		fprintf(arquivo, "( %f , %f ) \n", v[i].x, v[i].y); 
		fflush(arquivo);
	}
	
	fprintf(arquivo, "TOTAL DE DARDOS ARREMESSADOS ------> %d \n", pontosNoAlvo);
	fprintf(arquivo, "TOTAL DE DARDOS NO QUARTO DE CIRCULO ------> %d \n", totalDePontos);
	fprintf(arquivo, "TOTAL DE DARDOS ARREMESSADOS ------> 3.138452 \n");
	
	fclose(arquivo);
	
}