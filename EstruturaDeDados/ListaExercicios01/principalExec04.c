#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[5];
	int i, pares = 0, impares = 0;
	
	//Entrada de Dados
	printf("Digite 5 n�meros inteiros:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
		
		//Verifica se o n�mero � par ou �mpar
		if(vetor[i]%2 == 0){
			pares++;
		} else {
			impares++;	
		}
	}
	
	//Sa�da de Dados
	printf("Quantidade de n�meros pares:%d\n", pares);
	printf("Quantidade de n�meros impares:%d\n", impares);
	
	return 0;
}
