#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	1 - Faça um programa que receba valores, mostrando na tela, e calcula a soma 
	e a média desses números.
	Obs: O programa encerra quando receber um número negativo.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	float num, soma, media;
	int count = 0;
	
	printf("Digite um número negativo para encerrar\n");
	
	while(num >= 0)
	{
		count++;
		
		printf("%i) Digite um número para somar: ", count);
		scanf("%f", &num);
		
		soma = soma + num;
		
		media = soma / count;
	}
	
	printf("\nSoma = %.2f\nMédia = %.2f\n", soma, media);
	
	return 0;
}
