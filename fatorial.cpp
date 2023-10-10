#include <stdio.h>

void Fatorial();

int main (){
	
	Fatorial();
	return 0;
}

void Fatorial(){
	
	int num,num2,fat;
	
	printf("DIGITE UM NUMERO: ");
	scanf("%d",&num);                               
	fat = num;
	while(true){
		num -= 1;
		fat *= num;
		if(num == 1){
			printf("fatorial: %d", fat);
		}
	}
}
