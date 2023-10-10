#include <stdio.h>
#include <math.h>

void codigo ();

int main(){
	codigo();
	return 0;
}

void codigo (){
	int num, raiz, resultado;
 
	printf("DIGITE UM NUMERO: ");
	scanf("%d", &num);
	raiz = sqrt(num);
	resultado = raiz * raiz;
	printf("O MENOR QUADRADO EH %d (QUADRADO DE %d)", resultado, raiz);
}

