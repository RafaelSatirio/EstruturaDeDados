#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5
char Frase[TAMANHO+20];
int main(int argc, char *argv[]) {
	char ch1 = 'A'; int i = 0, tam = 0;
	memset(Frase,'\0',sizeof(Frase));
	tam = sizeof(Frase);
	for(i = 0; i < tam; i++) Frase[i] = ch1 + i;
	printf("Frase=%s \n",Frase);
	return 0;
}
