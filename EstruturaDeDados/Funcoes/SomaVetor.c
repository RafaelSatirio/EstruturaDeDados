int SomaVetor(int* p, int TAM){
	int Soma = 0, i;
	
	for(i = 0; i < TAM; i++){
		Soma += p[i];
	}
	return Soma;
}
