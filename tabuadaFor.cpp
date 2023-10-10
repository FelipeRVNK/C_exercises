#include <stdio.h>

void tabuada();

int main(){
	tabuada();
	return 0;
}

void tabuada(){
	int num,i,resultado;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++){
		resultado = num * i;
		if(resultado % 2 == 1)
			printf("%d x %d = %d\n",num,i,resultado);
	}
}
