#include <stdio.h>
#include <locale.h>

int main()
{
	
	//3 - Fa�a um algoritmo para ler dois n�meros inteiros e escrever o maior.
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num1);
	
	printf("Digite um n�mero: ");
	scanf("%i", &num2);
	
	if(num1 > num2)
	{
		printf("%i � maior do que %i", num1, num2);
	}
	else if(num1 == num2)
	{
		printf("N�meros digitados s�o iguais");
	}
	else
	{
		printf("%i � maior do que %i", num2, num1);
	}
	
	return 0;
}
