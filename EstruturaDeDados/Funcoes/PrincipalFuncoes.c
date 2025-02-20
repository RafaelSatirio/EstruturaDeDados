#include <stdio.h>
#include <stdlib.h>

#include "SomaVetor.h"

int main(int argc, char *argv[]) {
	int Valores[3] = {4,5,6}, i = 0;
	int Resultado = 0;
	Resultado = SomaVetor(Valores, 3);
	printf("Soma do Vetor = %d", Resultado);
	return 0;
}

