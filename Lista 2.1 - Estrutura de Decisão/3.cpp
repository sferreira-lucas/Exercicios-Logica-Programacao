#include <stdio.h>
#include <locale.h>

int main()
{
	
	//3 - Faça um algoritmo para ler dois números inteiros e escrever o maior.
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite um número: ");
	scanf("%i", &num1);
	
	printf("Digite um número: ");
	scanf("%i", &num2);
	
	if(num1 > num2)
	{
		printf("%i é maior do que %i", num1, num2);
	}
	else if(num1 == num2)
	{
		printf("Números digitados são iguais");
	}
	else
	{
		printf("%i é maior do que %i", num2, num1);
	}
	
	return 0;
}
