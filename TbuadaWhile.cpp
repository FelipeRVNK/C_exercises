#include <stdio.h>

void tabuada();

int main(){
	tabuada();
	return 0;
}

void tabuada(){
	int num,resultado,i = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(i <= 10){
		resultado = num * i;
		if(resultado % 2 == 1)
			printf("%d X %d = %d\n",num,i,resultado);
		i++;
	}
}

