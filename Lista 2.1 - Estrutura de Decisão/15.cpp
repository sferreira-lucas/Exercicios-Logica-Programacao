#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*Faça um algoritmo para ler a temperatura atual e conforme leitura, imprimir o 
resultado de acordo com a tabela abaixo.
*/

	setlocale(LC_ALL, "Portuguese");

	int temperatura;
	
	printf("Qual a temperatura atual: ");
	scanf("%i", &temperatura);
	
	if(temperatura > 16 && temperatura < 23)
	{
		printf("Frio.");
	}
	else if(temperatura > 23 && temperatura < 26) 
	{
		printf("Agradável.");
	}
	else if(temperatura > 26 && temperatura < 31)
	{
		printf("Calor.");
	}
	else if(temperatura > 31)
	{
		printf("Muito calor.");
	}
	else
	{
		printf("Muito frio");
	}
	
	return 0;
}
