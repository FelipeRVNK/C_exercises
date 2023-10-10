#include <stdio.h>

void potencial();

int main (){
	
	potencial();
	return 0;
}

void potencial(){
	
	int x,y,cont,conta = 1;
	
	printf("DIGITE UM NUMERO: ");
	scanf("%d",&x);    
	printf("DIGITE UM NUMERO: ");
	scanf("%d",&y);                             
	while(true){
		conta *= x;
		cont++;
		if(cont == y){
			printf("resultado: %d",conta);
			break;
		}
	}
}
