#include <stdio.h>
#include <locale.h>

int main()
{
	//4 - Fa�a um algoritmo para ler um n�mero inteiro e informar se o n�mero � par ou �mpar.
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero para saber se � par ou impar: \n");
	scanf("%i", &num);
	
	if(num % 2 == 0)
	{
		printf("O n�mero %i � par", num);
	}
	else
	{
		printf("O n�mero %i � impar", num);
	}
	return 0;
}
