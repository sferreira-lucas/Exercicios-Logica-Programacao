#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	5) Fa�a um programa que receba um n�mero e diga se este n�mero est� no intervalo entre 
100 e 200.
	*/
	setlocale(LC_ALL, "Portuguese");
		
	float numero;
	
	printf("Digite um n�mero: ");
	scanf("%f", &numero);
	
	if(numero >= 100 && numero <= 200)
	{
		printf("%.2f est� entre 100 e 200.", numero);
	}
	else
	{
		printf("%.2f n�o est� entre 100 e 200.", numero);
	}
		
	return 0;
}
