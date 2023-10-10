#include <stdio.h>

void tombRaider();

int main(){
	tombRaider();
	return 0;
}

void tombRaider(){
	int item,i,arma = 0,medi = 0,tesouro = 0;
	
	for(i = 1; i <= 20; i++){
		printf("Digite um numero do item: ");
		scanf("%d", &item);
		if(item == 1)
			arma++;
		else if(item == 2)
			medi++;
		else if(item == 3)
			tesouro++;
	}
	printf("Voce coletou:\n");
	printf("%d armas\n",arma);
	printf("%d medipack\n",medi);
	printf("%d tesouros\n", tesouro);
	
}
