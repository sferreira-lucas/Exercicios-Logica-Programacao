#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	/*
	2 - Escreva um algoritmo em que leia um número e imprima a raiz quadrada do número 
	caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo. Obs: 
	Usar a biblioteca math.h.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	double num;
	
	printf("Digite um número raiz quadrada:\n");
	scanf("%lf", &num);

	if(num >= 0)
	{
		printf("%.2lf", sqrt(num));	
	}
	else
	{
		printf("%.2f", pow(num, 2));
	}
	
	
	
	
	
	
	return 0;
}
