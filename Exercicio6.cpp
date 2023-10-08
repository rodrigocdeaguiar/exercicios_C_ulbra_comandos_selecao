#include <stdio.h>
#include <conio.h>

main(){
	float num1, num2, num3;
	printf("Digite um numero:\n");
	scanf("%f", &num1);
	printf("Digite outro numero:\n");
	scanf("%f", &num2);
	printf("Digite outro numero:\n");
	scanf("%f", &num3);
	
	if(num1 > num2 && num1 > num3) {
		printf("Maior numero: %.2f", num1);
}
	else{
		if(num2 > num1 && num2 > num3){
			printf("Maior numero: %.2f", num2);
		}
		else{
			if(num3 > num1 && num3 > num2){
				printf("Maior numero: %.2f", num3);
			}
			else{
				printf("ERRO! Nao pode existir dois ou mais valores iguais!");
			}
		}
	}

}
