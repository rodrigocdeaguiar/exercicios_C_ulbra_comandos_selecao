#include <stdio.h>
#include <conio.h>

main(){
	int i;
	float a, b, c;
	
	printf("Digite um numero, que pode ser 1, 2 ou 3: \n");
	scanf("%i", &i);
	printf("Digite um numero:\n");
	scanf("%f", &a);
	printf("Digite outro numero:\n");
	scanf("%f", &b);
	printf("Digite outro numero:\n");
	scanf("%f", &c);
	
	if (i == 1){
		if (a > b && b > 4){
		printf("Em ordem crescente: %f, %f, %f", c, b, a);
	}
		else{
			if (a > c && c > b){
				printf("Em ordem crescente: %f, %f, %f", b, c, a);
			}
			else{
				if (b > a && a > c){
					printf("Em ordem crescente: %f, %f, %f", c, a, b);
				}
				else{
					if (b > c && c > a){
						printf("Em ordem crescente: %f, %f, %f", a, c, b);
					}
					else{
						if (c > b && b > a){
							printf("Em ordem crescente: %f, %f, %f", a, b, c);
						}
						else{
							if (c > a && a > b){
								printf("Em ordem crescente: %f, %f, %f", b, a, c);
							}
							else{
								printf("VALORES INVALIDOS!");
							}
						}
					}
				}
			}
		}
	}
	else{
		if (i == 2){
			if (a > b && b > 4){
		printf("Em ordem decrescente: %f, %f, %f", a, b, c);
	}
		else{
			if (a > c && c > b){
				printf("Em ordem decrescente: %f, %f, %f", a, c, b);
			}
			else{
				if (b > a && a > c){
					printf("Em ordem decrescente: %f, %f, %f", b, a, c);
				}
				else{
					if (b > c && c > a){
						printf("Em ordem decrescente: %f, %f, %f", b, c, a);
					}
					else{
						if (c > b && b > a){
							printf("Em ordem decrescente: %f, %f, %f", c, b, a);
						}
						else{
							if (c > a && a > b){
								printf("Em ordem decrescente: %f, %f, %f", c, a, b);
							}
							else{
								printf("VALORES INVALIDOS!");
							}
						}
					}
				}
			}
		}
		}
		else{
			if (i == 3){
				if (a > b && b > 4){
				printf("Com o maior valor no meio: %f, %f, %f", c, a, b);
				}	
				else{
					if (a > c && c > b){
						printf("Com o maior valor no meio: %f, %f, %f", b, a, c);
					}
					else{
						if (b > a && a > c){
							printf("Com o maior valor no meio: %f, %f, %f", c, b, a);
						}
						else{
							if (b > c && c > a){
								printf("Com o maior valor no meio: %f, %f, %f", a, b, c);
							}
							else{
								if (c > b && b > a){
									printf("Com o maior valor no meio: %f, %f, %f", a, c, b);
								}
								else{
									if (c > a && a > b){
										printf("Com o maior valor no meio: %f, %f, %f", b, c, a);
									}
									else{
										printf("VALORES INVALIDOS!");
									}
								}
							}
						}
					}
				}
		}
		}
		}
	}
