#include <stdio.h>
#include <stdbool.h>

int main() {
	
    int x=1, y=1, i, conta = 1;
    
    printf("digite um numero: ");
    scanf("%d",&x);
    printf("digite um numero2: ");
    scanf("%d",&y);
    
    for(i=1;i <= y;i++){
    	conta *= x;
        if(i == y)
        	printf("%d",conta);
    }
    
    return 0;
}
