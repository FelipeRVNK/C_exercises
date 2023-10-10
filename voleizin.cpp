#include <stdio.h>
#include "conio.h"

void selecaovoleibolas();

int main() {
    selecaovoleibolas();
    return 0;
}

void selecaovoleibolas()
{
    char nome[20], sexo;
    int idade;

    printf("quale o seu nome: ");
    scanf("%s",&nome);
    printf("sexo?[m/f]: ");
    fflush(stdin);
    scanf("%c",&sexo);
    printf("quantos anos: ");
    scanf("%d",&idade);

    if(sexo == 'f' && idade >= 7 && idade <= 10)
    {
        printf("%s inscrita para selecao feminina juvenil de voleibolas!", nome);
    }
    else if(sexo == 'm' && idade >= 8 && idade <= 12)
    {
        printf("%s inscrito para selecao masculina juvenil de voleibolas!", nome);
    }
    else
    {
        printf("%s, voce nao pode se increver para voleibolas, lamentamos!", nome);
    }

}
