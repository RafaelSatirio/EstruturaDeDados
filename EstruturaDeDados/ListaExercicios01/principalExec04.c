#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[5];
	int i, pares = 0, impares = 0;
	
	//Entrada de Dados
	printf("Digite 5 números inteiros:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
		
		//Verifica se o número é par ou ímpar
		if(vetor[i]%2 == 0){
			pares++;
		} else {
			impares++;	
		}
	}
	
	//Saída de Dados
	printf("Quantidade de números pares:%d\n", pares);
	printf("Quantidade de números impares:%d\n", impares);
	
	return 0;
}
