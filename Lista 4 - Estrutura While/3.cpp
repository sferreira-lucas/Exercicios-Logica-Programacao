#include <stdio.h>
#include <locale.h>

int main()
{
/*	3 - Faça um programa que receba valores, mostrando na tela, no final imprima o
maior e o menor desses números.
Obs: O programa encerra quando receber um número negativo.*/

	setlocale(LC_ALL, "Portuguese");
	
	int valores, maior = 0, menor = 0, count = 0;
	
	printf("O programa encerra quando receber um número negativo.\n");
	
	while(valores >= 0)
	{
		count++;
		
		printf("%i) Digite um valor: ", count);
		scanf("%i", &valores);
		
		if(valores > maior)
		{
			maior = valores;
		}
		
		if(valores < menor)
		{
			menor = valores;
		}
		
	}
	
	
		printf("\nMaior: %i\nMenor: %i", maior, menor);	
	
	return 0;
}
