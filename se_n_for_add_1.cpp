#include <stdio.h>

void maior();

int main()
{
    maior();
    return 0;
}

void maior()
{
    int num;
    printf("digite um numero: ");
    scanf("%d",&num);
    if(num > 100 || num == 50)
    {
        printf("correto");
    }
    else
    {
        num += 1;
        printf ("errado %d",num);
    }
}
