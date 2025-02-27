#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[5];
	int i, maior, menor;
	
	// Entrada de Dados
	printf("Digite 5 números inteiros:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
	//Inicializa maior e menor com o primeiro elemento
	maior = menor = vetor[0];
	
	//Verifica os outros elementos
	for(i = 1; i < 5; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
		if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	//Saída de dados 
	printf("Maior número: %d\n", maior);
	printf("Menor número: %d\n", menor);
	
	return 0;
}
