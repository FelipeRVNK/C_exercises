#include <stdio.h>

void estoque();

int main() {
    estoque();
    return 0;
}

void estoque()
{
    int codigo_p, qtd_estoque, qtd_min, calculo;
    char descricao[20];

    printf("VERIFICACAO DE ESTOQUES \n");
    printf("informe o codigo do produto: \n");
    scanf("%d",&codigo_p);
    printf("informe a quantidade no estoque: \n");
    scanf("%d",&qtd_estoque);
    printf("informe a quantidade minima: \n");
    scanf("%d",&qtd_min);
    printf("informe a descricao: \n");
    scanf("%s",&descricao);
    if(qtd_estoque <= qtd_min)
    {
        printf("%s, estoque baixo!", descricao);
    }
    else if(qtd_estoque > qtd_min)
    {
        calculo = qtd_estoque - qtd_min;
        printf("%d ,the difference between estoque and estoque minimo is %d",codigo_p, calculo);
	}
}
