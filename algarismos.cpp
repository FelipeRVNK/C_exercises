#include <stdio.h>

void algarismos();

int main(){
	algarismos();
	return 0;
}

void algarismos(){
	int numero, inverso;
	printf("digite um numero");
	scanf("%i", &numero);
	inverso = ((numero % 10) * 100) + (((numero / 10) % 10) * 10) + (numero / 100);
	printf("o numero inverso eh: %i", inverso);
}
