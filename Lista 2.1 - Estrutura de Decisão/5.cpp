#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	5 - Escreva um algoritmo que receba um n�mero e imprima uma das mensagens: �� 
	m�ltiplo de 3� ou �n�o � m�ltiplo de 3�.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digiteum n�mero: \n");
	scanf("%i", &num);
	
	if(num % 3 == 0)
	{
		printf("� m�ltiplo de 3");
	}
	else
	{
		printf("N�o � m�ltiplo de 3");
	}
	
	return 0;
}
