#include <stdio.h>
#include <conio.h>

main(){
	int idade;
	printf("Digite a idade:\n");
	scanf("%i", &idade);
	
	if (idade >= 18){
		printf("A pessoa e de maior.");
	}
	else{
		printf("A pessoa e menor de idade.");
	}
	
}
