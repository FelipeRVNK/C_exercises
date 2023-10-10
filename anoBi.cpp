#include <stdio.h>

void anoBi();

int main(){
	anoBi();
	return 0;
}

void anoBi(){
	int ano;
	printf("fala um ano: ");
	scanf("%d" , &ano);
	if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
		printf("Bissexto!");
	else
		printf("Nao eh bissexto!");
}
