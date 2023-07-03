#include <stdio.h>
#include <locale.h>

int main()
{
	/*6 - Fa�a um algoritmo para ler dois n�meros inteiros A e B e informar se A � divis�vel por B.
*/
	setlocale(LC_ALL, "Portuguese");
	
	int dividendo, divisor;
	
	printf("Digite um n�mero dividendo: ");
	scanf("%i", &dividendo);
	
	printf("Digite um n�mero divisor: ");
	scanf("%i", &divisor);
	
	if(divisor == 0 || dividendo == 0)
	{
		printf("N�o � poss�vel dividir um n�mero por 0\n");	
	}
	else if(divisor != 0 && dividendo % divisor == 0)
	{
		printf("%i � divis�vel por %i\n", dividendo, divisor);	
	}
	else
	{
		printf("%i n�o � divis�vel por %i\n", dividendo, divisor);
	}
	return 0;
}
