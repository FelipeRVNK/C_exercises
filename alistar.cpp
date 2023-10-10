#include <stdio.h>

void alistar();

int main (){
	
	alistar();
	return 0;
}

void alistar () {
	int num,tentativa;
	
	printf("DIGITE UM NUMERO: ");
	scanf("%d", &num);
	while(tentativa != num){
		printf("DIGITE UM NUMERO: ");
		scanf("%d", &tentativa);	
	}
	printf("ACERTOU!");	
}
