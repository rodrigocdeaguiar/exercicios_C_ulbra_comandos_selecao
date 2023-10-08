#include <stdio.h>
#include <conio.h>

main(){
	int num;
	printf("Digite um numero:\n");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("E multiplo de dois!");
	}
	else{
		printf("Nao e multiplo de dois!");
	}
	
}
