#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	Criar um algoritmo que leia dez números inteiros e imprima o maior e o segundo maior
	número da lista.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int num, count = 1, maior = 0, segundoMaior = 0;
	
	for(int i = 0; i < 10; i++)
	{
		printf("Digite um número(%i/10):", count++);
		scanf("%i", &num);
		
		if(num > maior)
		{
			segundoMaior = maior;
			maior = num;	
		}
		else if(num > segundoMaior && num < maior)
		{
			segundoMaior = num;
		}
	}
	
	printf("Maior: %i\n", maior);
	printf("2º Maior: %i", segundoMaior);
	
	return 0;
}
