#include <stdio.h>

void taOK();

int main(){
	taOK();
	return 0;
}

void taOK(){
	int n1,n2,n3;
	printf("primeiro numero: ");
	scanf("%d",&n1);
	printf("segundo numero: ");
	scanf("%d",&n2);
	printf("terceiro numero: ");
	scanf("%d",&n3);
	
	if (n1 > 10 && n1 < 100)
		printf("TA OK!");
	else if (n2 != n3 && n3 > 50)
		printf("TA OK!");
	else
		printf("NAO TA OK!");
}

