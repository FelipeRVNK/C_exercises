#include <stdio.h>

void hoje_E_Sabado();

int main(){
	hoje_E_Sabado();
	return 0;
}

void hoje_E_Sabado(){
	int dia;
	printf("Qual eh o dia util? \n");
	printf("DOMINGO - 1 \n");
	printf("SEGUNDA - 2 \n");
	printf("TERCA - 3 \n");
	printf("QUARTA - 4 \n");
	printf("QUINTA - 5 \n");
	printf("SEXTA - 6 \n");
	printf("SABADO - 7 \n");
	scanf("%d", &dia);
	while (true)
		if (dia == 1 || dia == 7){
			printf("dia nao util");
			break;
		}
		else if(dia > 1 && dia < 7){
			printf("dia util");
			break;
		}
		else{
			printf("INVALIDO \n");
			printf("Qual eh o dia util? \n");
			scanf("%d", &dia);
		}	
}
