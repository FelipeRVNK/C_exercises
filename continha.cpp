#include <stdio.h>
#include <math.h>
void continha();

int main(){
    continha();
    return 0;
}

void continha(){
    int numero1,numero2,potencia,potencia2;
    printf("UM NUMERO: ");
    scanf("%d", &numero1);
    printf("UM NUMERO2: ");
    scanf("%d", &numero2);
    printf("%d + %d = %d\n",numero1,numero2,numero1 + numero2);
    potencia = numero1 * (pow(numero2, 2));
    printf("%d X (%d pow 2) = %d\n", numero1,numero2,potencia);
    potencia2 = pow(numero1, 2);
    printf("%d pow 2 = %d",numero1, potencia2);
}

