#include <stdio.h>

void dataMes();

int main(){
	dataMes();
	return 0;
}

void dataMes(){
	int mes, dia, ano;
	printf("-VERIFICAMOS SE MES, DIA OU ANO ESTAO CORRETOS- \n");
	printf("MES: ");
	scanf("%d", &mes);
	printf("DIA:");
	scanf("%d", &dia);
	printf("ANO: ");
	scanf("%d", &ano);
	if(mes >= 1 && mes <= 12){
		if(mes == 2){
			if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0 && dia >= 1 && dia <= 29)
				printf("ANO BISSEXTO E MES E DIA CORRETOS!");
			else if(dia >= 1 && dia <= 28)
				printf("ANO NAO BISSEXTO E MES E DIA CORRETOS!");
			else
				printf("DIA OU ANO INCORRETO!");
		}	
		else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
			if(dia >= 1 && dia < 31)
				printf("DIA E MES CORRETOS!");
			else
				printf("DIA INCORRETO!");
		}
		else if (dia >= 1 && dia <= 31)
			printf("DIA E MES CORRETOS!");
			else
				printf("DIA INCORRETO!");
	}
	else 
		printf("MES INCRRETO!");	
}
