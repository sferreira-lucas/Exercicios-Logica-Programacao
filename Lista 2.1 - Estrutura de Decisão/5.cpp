#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	5 - Escreva um algoritmo que receba um número e imprima uma das mensagens: “é 
	múltiplo de 3” ou “não é múltiplo de 3”.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digiteum número: \n");
	scanf("%i", &num);
	
	if(num % 3 == 0)
	{
		printf("É múltiplo de 3");
	}
	else
	{
		printf("Não é múltiplo de 3");
	}
	
	return 0;
}
