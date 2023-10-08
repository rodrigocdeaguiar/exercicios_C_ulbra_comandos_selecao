#include<stdio.h>
#include<conio.h>

int main()
{ 
  float r=0, a, b;
  char op;
  printf("Digite um valor:\n");
  scanf("%f", &a); fflush(stdin);
  printf("Digite um operador[+,-,*,/]:\n");
  scanf("%c", &op); fflush(stdin);
   printf("Digite um valor:\n");
  scanf("%f", &b); fflush(stdin);
  
    if (op=='+'){
		r=a+b;
		printf("Soma=%f\n", r);
	}else if (op=='-'){
		r=a-b;
		printf("Subtracao=%f\n", r);
	}else if(op=='*'){
		r=a*b;
		printf("Multiplicacao=%f\n", r);
	}else if(op=='/'){
		r=a/b;
		printf("Divisao=%f\n", r);
	}else printf("Operacao invalida!");
	
	
/*	switch(op)
	{
		case '+' : r=a+b;
				printf("Soma=%f\n", r);
				break;
		case '-' : r=a-b;
				printf("Subtracao=%f\n", r);
			    break;
		case '*' : r=a*b;
				printf("Multiplicacao=%f\n", r);
			    break;
		case '/' : r=a/b;
				printf("Divisao=%f\n", r);
			    break;
		default : printf("Operacao invalida!");
	}
*/
	
	getch();
	return 0;

}
