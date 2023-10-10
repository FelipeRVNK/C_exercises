#include <stdio.h>

void mediaAritmetica();

int main (){
	
	mediaAritmetica();
	return 0;
}

void mediaAritmetica(){
	
	int num, soma = 0, cont = 0;
	float media;

	while(num != 0){
		printf("DIGITE UM NUMERO: ");
		scanf("%d",&num);
		if(num == 0)
			break;
		cont++;
		soma += num;
	}
	media = soma/cont;
	printf("%.2f", media);
}
