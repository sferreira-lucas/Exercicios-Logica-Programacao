#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	Criar um algoritmo que imprima todos os n�meros de 1 at� 100, inclusive, e a soma
do quadrado desses n�meros.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int valor = 100, quadrado;
	
	for(int i = 0; i <= valor; i++)
	{
		quadrado = i * i;
		printf("%i^2 = %i\n", i, quadrado);
	}
	
	return 0;
}
