#include <stdio.h>
#include <stdlib.h>

#include "Inc.h"

int main(int argc, char *argv[]) {
	int Valor = 4, Resultado = 0;
	Resultado = Inc(Valor);	
	printf("Resultado = %d\n", Resultado);
	return 0;
}

int Inc(int v1){
	return v1 + 1;
}

