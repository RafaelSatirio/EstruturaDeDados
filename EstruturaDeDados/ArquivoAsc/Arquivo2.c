#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 5
char Frase[TAMANHO+1];
char Frase2[TAMANHO+1];

int main(int argc, char *argv[]){
	
	FILE *fp;
	char NomeArq[] = "TesteArq.txt";
	
	char ch1 = 'A'; int i = 0, tam = 0;
	memset(Frase,'\0',sizeof(Frase));
	tam = sizeof(Frase);
	for(i = 0; i < tam; i++) Frase[i] = ch1 + i;
	printf("Frase=%s \n",Frase);
	
	fp = fopen(NomeArq, "wb+");
	if(fp!=NULL){
		fwrite(Frase, 1, sizeof(Frase),fp);
	}
	
	fclose(fp);
	fp = fopen(NomeArq,"rb");
	if(fp!=NULL){
		memset(Frase2,'\0',sizeof(Frase2));
		fread(Frase2,1,sizeof(Frase2),fp);
	}
	
	printf("Frase2=%s \n", Frase2);
	
	fclose(fp);
	return 0;
}
