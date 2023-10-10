#include <stdio.h>

void seraTriangulo();

int main(){
	seraTriangulo();
	return 0;
}

void seraTriangulo(){
	int a, b, c;
	printf("PRIMEIRO NUMERO: ");
	scanf("%d", &a);
	printf("SEGUNDO NUMERO: ");
	scanf("%d", &b);
	printf("TERCEIRO NUMERO: ");
	scanf("%d", &c);
	if (a < b + c && b < a + c && c < a + b) {
    printf("PODE SER TRIANGULO!\n");
	    if (a == b && b == c) 
	    	printf("EQUILATERO!\n");
	    else if (a != b && b != c && c != a) 
	    	printf("ESCALENO!\n");
	    else 	/* else if(a == b != c && b == c != a && c == a != b) */
	    	printf("ISOSCELES!\n");
	}
	else 
		printf("NAO EH UM TRIANGULO!\n");
	
}
	

