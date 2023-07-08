#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	1 - Fa�a um programa que receba valores, mostrando na tela, e calcula a soma 
	e a m�dia desses n�meros.
	Obs: O programa encerra quando receber um n�mero negativo.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	float num, soma, media;
	int count = 0;
	
	printf("Digite um n�mero negativo para encerrar\n");
	
	while(num >= 0)
	{
		count++;
		
		printf("%i) Digite um n�mero para somar: ", count);
		scanf("%f", &num);
		
		soma = soma + num;
		
		media = soma / count;
	}
	
	printf("\nSoma = %.2f\nM�dia = %.2f\n", soma, media);
	
	return 0;
}
