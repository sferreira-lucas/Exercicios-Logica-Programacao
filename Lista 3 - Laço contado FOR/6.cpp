#include <stdio.h>
#include <locale.h>

int main()
{
	//Faça um programa em C para exibir a tabuada de 0 a 9.

	setlocale(LC_ALL, "Portuguese");
	
	int num, tabuada, resultado;
	
	printf("Digite um número para ver a tabuada: ");
	scanf("%i", &tabuada);
	
	for(num = 1; num <= 10; num++)
	{
		resultado = tabuada * num;
		
		printf("%i * %i = %i\n", tabuada, num, resultado);
	}
	return 0;
}
