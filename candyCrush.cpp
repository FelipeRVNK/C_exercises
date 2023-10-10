#include <stdio.h>

void codigo ();

int main(){
	codigo();
	return 0;
}

void codigo (){
	int i, pontos;
	
	printf("INFORME A PONTUACAO: ");
	scanf ("%d", &pontos);
	for (i = 0; i <= pontos; i++)
		printf("%d\n",i);
}


