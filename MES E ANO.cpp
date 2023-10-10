
#include <stdio.h>

void suaIdade();

int main(){
    suaIdade();
    return 0;
}

void suaIdade(){
     int anoAtual, anoNasc, mesAtual, mesNasc, idade, idadeMes, faltamMes, idadeAno, faltam;
     printf("DATA ATUAL \n");
     printf("ANO (aaaa): ");
     scanf("%i" , &anoAtual);
     printf("MES (mm):");
     scanf("%i" , &mesAtual);
     printf("INFORME SUA DATA DE NASCIMENTO \n");
     printf("ANO (aaaa):");
     scanf("%i" , &anoNasc);
     printf("MES (mm): ");
     scanf("%i" , &mesNasc);
     faltam = mesNasc - mesAtual;
     idade = anoAtual - anoNasc;
     idadeMes = idade * 12;
     faltamMes = idadeMes - faltam;
     idadeAno = faltamMes / 12;
     printf("Voce tem %i anos \n", idadeAno);
     printf("a sua idade em meses eh de: %i meses", faltamMes);
}
