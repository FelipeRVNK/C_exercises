#include <stdio.h>

void codigo ();

int main (){
	
	codigo();
	return 0;
}

void codigo () {
	int dec, bin, i,inverte,inteiro,div,resto,resultado = 0;
	
	printf("DIGITE UM NUMERO: ");
	scanf("%d", &dec);
	
	while(dec != 0){
		bin = dec%2;
		dec /= 2;
		inteiro = inteiro * 10 + bin;	
	}
	printf("invertido: %d\n",inteiro);	
	div = inteiro;	
	while(div != 0){
		resto = div % 10;
		resultado = resultado * 10 + resto;
		div /= 10;
	}
	printf("certo: %d\n",resultado);	
}
