#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Escreva um algoritmo que imprima todos os números ímpares do intervalo fechado de
1 a 100.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int impar = 100;
	
	for(int i = 0; i <= impar; i++)
	{
		if(i % 2 != 0)
		{
			printf("%i\n", i);
		}
	}
	return 0;
}
