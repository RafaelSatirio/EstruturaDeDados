#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int i, vetor[5];
	
	// Entrada de Dados
	printf("Digite 5 n�meros inteiros:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
	//Sa�da na ordem inversa
	printf("N�meros na ordem inversa:\n");
	for(i = 4; i >= 0; i--){
		printf("%d", vetor[i]);
	}
	printf("\n");
	
	return 0;
}
