#include <stdio.h>

void indicePolu();

int main() {
    indicePolu();
    return 0;
}

void indicePolu()
{
    float idp;
    printf("quale o indice de poluicao:  ");
    scanf("%f",&idp);
    if(idp >= 0.30 && idp < 0.40){
        printf("suspender lista A");
    }
    else if(idp >= 0.40 && idp < 0.50){
        printf("suspender lista A e B");
    }
    else if(idp >= 0.50){
        printf("suspender lista A, B e C");
    }
    else
        printf("os valores do indice de poluicao estao dentro dos conformes!");
}
