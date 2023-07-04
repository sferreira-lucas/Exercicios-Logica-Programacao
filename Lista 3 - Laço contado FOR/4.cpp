#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	/* Escreva um programa que apresenta o Fatorial de um número.
		Ex: Fat de 5 = 5 * 4 * 3 * 2 * 1 = 120 
	*/
	int num, num1, fatorial = 1;
	
	printf("Digite um  número para calcular o fatorial: ");
	scanf("%i", &num);
	
	num1 = num;
	
	for (int i = 1; i <= num; i++)
	{
		fatorial = fatorial * i;
		
		printf("%i * ", num1--);
	}
	
	printf(" = %i\n", fatorial);
	
	return 0;
}
