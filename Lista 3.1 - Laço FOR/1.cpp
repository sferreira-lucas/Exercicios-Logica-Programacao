#include <stdio.h>
#include <locale.h>

int main()
{
	/*Escreva um algoritmo que receba 15 números e imprima quantos números maiores
que 30 foram digitados.*/

	setlocale(LC_ALL, "Portuguese");
	
	//Reduzindo para 5 valores apenas para teste do códiigo
	
	int num, count = 0, nValor = 1, maior = 0, valores = 5;
	
	for(int i = 0; i < valores; i++)
	{
		printf("Digite o %iº/15 valor: ", nValor++);
		scanf("%i", &num);
		
		if(num > 30)
		{
			count++;
		}
	}
	
	printf("Foram digitados %i números maiores do que 30", count);
	
	return 0;
}
