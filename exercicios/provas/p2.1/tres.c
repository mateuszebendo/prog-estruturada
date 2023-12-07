
int dardosNoQuartoDeCirculo (TPonto v[], int tamanho, float raio){
	// Para que um ponto (x, y) esteja dentro de um círculo de raio r, é preciso que a distância desse ponto ao centro do círculo seja menor ou igual a r
	int result = 0;
	for(int i = 0; i < tamanho; i++) if((distancia(v[i]) <= raio) result ++;
	return result;
};