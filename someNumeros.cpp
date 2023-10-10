#include <stdio.h>

void someNumeros();

int main (){
	
	someNumeros();
	return 0;
}

void someNumeros () {
	int num,resultado,resultadofinal,i;
	
	printf("DIGITE UM NUMERO: ");
	scanf("%d", &num);
	for(i=1; i <= num; i++){											
		resultadofinal += i;
	}
	printf("A soma de 1 ate %d eh: %d",num,resultadofinal);	
}
