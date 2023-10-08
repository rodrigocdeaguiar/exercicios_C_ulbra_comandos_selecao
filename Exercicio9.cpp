#include <stdio.h>
#include <conio.h>

main(){
	float n1, n2, n3, media;
	char conceito;
	printf("Digite tres notas\n");
	scanf("%f" "%f" "%f", &n1, &n2, &n3);
	media = (n1+n2+n3)/3;
	switch (media) {
		case >=9.0:
		conceito = a;
		break;
		
		case '>= 7.5' && '< 9.0':
		conceito = b;
		break;
		
		case '>= 6.0' && '< 7.5':
		conceito = c;
		break;
		
		case '>= 4.0' && '< 6.0':
		conceito = d;
		break;
		
		case '< 4.0':
		conceito = e;
		break;
	}
	
	if conceito == a || conceito == b || conceito || == c{
		printf("Conceito: %c. APROVADO!", conceito)
	}
	else{
		if conceito == d || conceito == d{
			printf("Conceito: %c. REPROVADO!", conceito)
		}
	}
	
	}
