#include <stdio.h>
#include <math.h>

void horarioDeAula();

int main(){
    horarioDeAula();
    return 0;
}

void horarioDeAula(){
	
     int tempo, calculo, finalzao, minutos, final;
     
     printf("INICIO DA AULA \n");
     printf("QUE HORAS COMECA SUA AULA: ");
     scanf("%i" , &tempo);
     
     printf("minutos: ");
     scanf("%i" , &minutos);
     
     calculo = (tempo * 60 ) + minutos + 50;
     final = calculo / 60; 
     finalzao = calculo % 60;
     
     printf("a aula acaba as %i:%i horas" ,final,finalzao);
}
