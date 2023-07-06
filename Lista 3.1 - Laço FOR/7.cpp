#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	Criar um algoritmo que leia um número (NUM) e então imprima os múltiplos de 3 e
5, ao mesmo tempo, no intervalo fechado de 1 a NUM.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	for(int i = 1; i <= num; i++)
	{
		if(i % 3 == 0)
		{
			printf("Multiplos de 3: %i \n", i);
		}
	}
	
	printf("----------------------\n");
	
	for(int j = 1; j <= num; j++)
	{
		if(j % 5 ==0)
		{
			printf("Multiplos de 5: %i \n", j);
		}
	}
	return 0;
}
