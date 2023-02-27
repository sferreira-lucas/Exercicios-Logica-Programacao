#include <stdio.h>
#include <locale.h>

int main()
{
/*	13) Fa�a um programa que determine se um ano � bissexto. Observa��o: S�o bissextos 
todos os anos divis�veis por 4, excluindo os que sejam divis�veis por 100, por�m, n�o os 
que sejam divis�veis por 400.
*/
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf("Digite o ano desejado: ");
	scanf("%i", &ano);
	
	if ((4 == 0 && ano % 100 != 0) || ano % 400 == 0)
	{
		printf("Ano bissexto.");
	}
	else
	{
		printf("Ano n�o bissexto.");
	}
	
	
	return 0;
}
