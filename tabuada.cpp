#include <stdio.h>

void tabuada();

int main(){
    tabuada();
    return 0;
}
void tabuada(){
	
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    printf("%d x 0 = %d\n", numero, numero * 0);
    printf("%d x 0 = %d\n", numero, numero * 1);
    printf("%d x 0 = %d\n", numero, numero * 2);
    printf("%d x 0 = %d\n", numero, numero * 3);
    printf("%d x 0 = %d\n", numero, numero * 4);
    printf("%d x 0 = %d\n", numero, numero * 5);
    printf("%d x 0 = %d\n", numero, numero * 6);
    printf("%d x 0 = %d\n", numero, numero * 7);
    printf("%d x 0 = %d\n", numero, numero * 8);
    printf("%d x 0 = %d\n", numero, numero * 9);
    printf("%d x 0 = %d\n", numero, numero * 10);
}

