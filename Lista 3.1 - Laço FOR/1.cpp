#include <stdio.h>
#include <locale.h>

int main()
{
	/*Escreva um algoritmo que receba 15 n�meros e imprima quantos n�meros maiores
que 30 foram digitados.*/

	setlocale(LC_ALL, "Portuguese");
	
	//Reduzindo para 5 valores apenas para teste do c�diigo
	
	int num, count = 0, nValor = 1, maior = 0, valores = 5;
	
	for(int i = 0; i < valores; i++)
	{
		printf("Digite o %i�/15 valor: ", nValor++);
		scanf("%i", &num);
		
		if(num > 30)
		{
			count++;
		}
	}
	
	printf("Foram digitados %i n�meros maiores do que 30", count);
	
	return 0;
}
