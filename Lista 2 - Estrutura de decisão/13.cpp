#include <stdio.h>
#include <locale.h>

int main()
{
/*	13) Faça um programa que determine se um ano é bissexto. Observação: São bissextos 
todos os anos divisíveis por 4, excluindo os que sejam divisíveis por 100, porém, não os 
que sejam divisíveis por 400.
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
		printf("Ano não bissexto.");
	}
	
	
	return 0;
}
