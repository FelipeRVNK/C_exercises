#include <stdio.h>

void pesoIdeal();

int main() {
    pesoIdeal();
    return 0;
}

void pesoIdeal()

{
    float altura, peso_m, peso_f;
    char sexo;

    printf("what is your height: ");
    scanf("%f", &altura);
    printf("what is your gender(m/f): ");
    scanf(" %c",&sexo);

    while(sexo != 'm' && sexo != 'f')
	{
        printf("what is your gender: ");
        scanf(" %c", &sexo);
		}
        if (sexo == 'm') 
		{
            peso_m = altura * 72.7 - 58;
            printf("%.2f is your ideal weight", peso_m);
        } 
		else if (sexo == 'f') 
            peso_f = altura * 62.1 - 44.7;
            printf("%.2f is your ideal weight", peso_f);
}
