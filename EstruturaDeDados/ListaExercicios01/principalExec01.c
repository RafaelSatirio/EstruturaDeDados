#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int vetor[5], soma = 0;
	int i;
	
	//Entrada de Dados
	printf("Digite 5 números inteiros:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
		soma += vetor[i];//Soma os elementos
	}
	
	printf("A soma dos elementos do vetor é: %d\n", soma);
	
	return 0;
}
