#include <stdio.h>
#include <locale.h>

int main()
{
	/*6 - Faça um algoritmo para ler dois números inteiros A e B e informar se A é divisível por B.
*/
	setlocale(LC_ALL, "Portuguese");
	
	int dividendo, divisor;
	
	printf("Digite um número dividendo: ");
	scanf("%i", &dividendo);
	
	printf("Digite um número divisor: ");
	scanf("%i", &divisor);
	
	if(divisor == 0 || dividendo == 0)
	{
		printf("Não é possível dividir um número por 0\n");	
	}
	else if(divisor != 0 && dividendo % divisor == 0)
	{
		printf("%i é divisível por %i\n", dividendo, divisor);	
	}
	else
	{
		printf("%i não é divisível por %i\n", dividendo, divisor);
	}
	return 0;
}
