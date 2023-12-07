
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

