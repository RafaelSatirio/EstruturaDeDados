#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[5];
	int i, soma = 0;
	float media;
	
	//Entrada de Dados
	printf("Digite 5 números inteiros:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}
	
	//Cálculo da média 
	media = (float)soma / 5;
	
	//Saída de Dados
	printf("A média dos núemros digitados é:%.2f", media);
	return 0;
}
