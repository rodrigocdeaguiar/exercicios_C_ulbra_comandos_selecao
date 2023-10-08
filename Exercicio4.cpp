#include <stdio.h>
#include <conio.h>

main(){
	float num1, num2, diferenca;
	printf("Digite um numero:\n");
	scanf("%f", &num1);
	printf("Digite outro numero:\n");
	scanf("%f", &num2);
	
	if (num1 == num2){
		printf("NUMEROS IGUAIS!");
		return 0;
	}
	else{
		if (num1 > num2){
			diferenca = num1 - num2;
			printf("Diferenca entre o maior e o menor numero: %.2f", diferenca);
		}
		else{
			diferenca = num2 - num1;
			printf("Diferenca entre o maior e o menor numero: %.2f", diferenca);
		}
	}
}
