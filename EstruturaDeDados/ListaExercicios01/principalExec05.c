#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[5];
	int i, soma = 0;
	float media;
	
	//Entrada de Dados
	printf("Digite 5 n�meros inteiros:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}
	
	//C�lculo da m�dia 
	media = (float)soma / 5;
	
	//Sa�da de Dados
	printf("A m�dia dos n�emros digitados �:%.2f", media);
	return 0;
}
