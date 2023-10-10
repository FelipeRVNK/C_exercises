#include <stdio.h>

void par_or_impar();

int main(){
	par_or_impar();
	return 0;
}

 void par_or_impar(){
 	int numero;
 	printf(" --PAR OU IMPAR-- \n");
 	printf("fala um numero:");
 	scanf("%d", &numero);
 	numero = numero % 2;
 	if(numero == 0)
 		printf("PAR");
 	else
 		printf("IMPAR");
 }
