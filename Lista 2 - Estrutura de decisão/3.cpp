#include <stdio.h>
#include <locale.h>

int main()
{
	//3) Escreva um programa que leia dois valores inteiros distintos e informe qual é o maior. 

	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, count = 1;
	
	printf("Digite o %iº valor: \n", count++);
	scanf("%i", &valor1);
	
	printf("Digite o %iº valor: \n", count++);
	scanf("%i", &valor2);
	
	if(valor1 > valor2)
	{
		printf("%i é maior do que %i", valor1, valor2);
	}
	else if(valor2 > valor1)
	{
		printf("%i é maior do que %i", valor2, valor1);
	}
	else
	{
		printf("Valores iguais!");
	}
	
	return 0;
}
