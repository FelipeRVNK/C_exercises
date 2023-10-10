#include <stdio.h>

void manequim();

int main() {
    manequim();
    return 0;
}

void manequim()
{
    char nome[20];
    int idade;
    float altura;

    printf("what is your name: ");
    scanf("%s", &nome);
    printf("how old are you: ");
    scanf("%d", &idade);
    printf("what is your height: ");
    scanf("%f", &altura);

    if(idade >=15 && idade <= 20 && altura >= 1.70 && altura <= 1.80)
    {
        printf("%s,you are aprovada!", nome);
    }
    else
		printf("%s, voce failed!", nome);
}
