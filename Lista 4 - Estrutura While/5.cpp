#include <stdio.h>
#include <locale.h>

int main()
{
	/*	5 - Fa�a um programa que leia v�rios inteiros positivos e mostre, no final, a soma
	dos n�meros pares e a soma dos n�meros �mpares. O programa para quando
	entrar um n�mero maior que 1000.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, totalPar = 0, totalImpar = 0;
	
	printf("N�meros iguais ou maiores do que 1000 encerram o programa\n");
	
	while(num <= 1000)
	{
		printf("Digite um n�mero: ");
		scanf("%d", &num);
	
		if(num > 1000)
		{
			break;
		}
		
			if(num %2 == 0)
			{
				totalPar = totalPar + num;	
			}
			else
			{
				totalImpar = totalImpar + num;
			}
	}	
	
	printf("Soma de pares: %i\n", totalPar);
	printf("Soma de impares: %i", totalImpar);
	
	return 0;
}
