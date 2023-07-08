#include <stdio.h>
#include <locale.h>

int main()
{
	/*	5 - Faça um programa que leia vários inteiros positivos e mostre, no final, a soma
	dos números pares e a soma dos números ímpares. O programa para quando
	entrar um número maior que 1000.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, totalPar = 0, totalImpar = 0;
	
	printf("Números iguais ou maiores do que 1000 encerram o programa\n");
	
	while(num <= 1000)
	{
		printf("Digite um número: ");
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
