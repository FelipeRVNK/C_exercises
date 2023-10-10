#include <stdio.h>

void inteiroEmGrau();

int main(){
    inteiroEmGrau();
    return 0;
}

void inteiroEmGrau(){
	
     int grau, numero, minutos, segundos;
     printf("fala um segundo ae: ");
     scanf("%d", &numero);
     grau = numero/3600;
     minutos = numero/ 60 % 60;
     segundos = (numero + (minutos * 60)) % 60 ;
     printf("%d grau, %d minutos, %d segundos",grau, minutos,segundos);
}
