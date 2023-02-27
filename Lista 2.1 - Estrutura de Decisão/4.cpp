#include <stdio.h>
#include <locale.h>

int main()
{
	//4 - Faça um algoritmo para ler um número inteiro e informar se o número é par ou ímpar.
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número para saber se é par ou impar: \n");
	scanf("%i", &num);
	
	if(num % 2 == 0)
	{
		printf("O número %i é par", num);
	}
	else
	{
		printf("O número %i é impar", num);
	}
	return 0;
}
