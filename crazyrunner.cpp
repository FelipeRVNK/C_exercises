#include <stdio.h>

void crazyrunner();

int main(){
	crazyrunner();
	return 0;
}

void crazyrunner(){
	int item,cont;
	
	do{
		printf("Digite um numero do item: ");
		scanf("%d", &item);
		if(item == 2)
			printf("BUUUUUMMMMMMMMMM EXPLODIU CHUPETINHA, TU PEGOU %d ITENS.",cont);
		cont++;
	}while(item != 2);
	
}
