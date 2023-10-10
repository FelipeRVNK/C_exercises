#include <stdio.h>
#include <string.h>
#include <conio.h>

void transformaBinario();

int main(){
	transformaBinario();
	return 0;
}

void transformaBinario(){
	char numero[5];
	const char *calculo;
	printf("TRANSFORMERS DE BINARIO\n");
	printf("DIGITE UM NUMERO BINARIO DE 5 DIGITOS SEU NUTELLINHA:");
	fflush(stdin);
	scanf("%d", &numero);
	calculo = strtok(numero);
	printf("%s", calculo);
	
}
