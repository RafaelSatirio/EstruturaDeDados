#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int i, vetor[5];
	
	// Entrada de Dados
	printf("Digite 5 números inteiros:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
	//Saída na ordem inversa
	printf("Números na ordem inversa:\n");
	for(i = 4; i >= 0; i--){
		printf("%d", vetor[i]);
	}
	printf("\n");
	
	return 0;
}
