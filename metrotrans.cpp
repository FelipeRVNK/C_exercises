#include <stdio.h>

void metrotrans();
int main(){
    metrotrans();
    return 0;
}

void metrotrans()
{
    int m, dm, cm, mm;
    printf("fala ai um metro: ");
    scanf("%d",&m);
    dm = m * 10;
    cm = m * 100;
    mm = m * 1000;
    printf("%d em decimetros eh %d\n",m ,dm);
    printf("%d em centimetros eh %d\n",m,cm);
    printf("%d em milimetros eh %d\n",m,mm);
}



