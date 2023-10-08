#include <stdio.h>
#include <conio.h>

main(){
	float num1, num2, soma;
	printf("Digite um numero:\n");
	scanf("%f", &num1);
	printf("Digite outro numero:\n");
	scanf("%f", &num2);
	
	if (num1 > num2){
		soma = num1 + 100;
		printf("Resultado: %.1f", soma);
	}
	else{
		soma = num2 + 100;
		printf("Resultado: %.1f", soma);
	}
			
}
