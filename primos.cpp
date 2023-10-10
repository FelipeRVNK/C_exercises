#include <stdio.h>

void primos();

int main(){
	primos();
	return 0;
}

void primos(){
	
	int num,cont,calc,i;
	printf("DIGITE UM NUMERO: ");
	scanf("%d",&num);
	
	for(i=2; i<=num; i++){
		calc = num % i;
		if(calc == 0)
			cont++;
	}
	if(cont == 1)
		printf("numero primo");
	else
		printf("numero nao primo");
}
