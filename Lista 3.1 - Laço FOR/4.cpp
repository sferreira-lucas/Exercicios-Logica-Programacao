#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Escreva um algoritmo que leia 20 n�meros e imprima a soma dos positivos e o total
de n�meros negativos.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int num, total, count = 1, ler = 5, countN = 0;
	
	for(int i = 0; i < ler; i++)
	{
		printf("Digite um n�mero(%i/20): ", count++);
		scanf("%i", &num);
		
		if(num > 0)
		{
			total = total + num;
		}
		else
		{
			countN++;
		}
	}
	
	printf("\nTotal da soma dos positivos: %i\n", total);
	printf("Total de n�meros negativos: %i", countN);
	
	
	return 0;
}
