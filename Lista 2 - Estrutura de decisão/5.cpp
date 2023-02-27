#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	5) Faça um programa que receba um número e diga se este número está no intervalo entre 
100 e 200.
	*/
	setlocale(LC_ALL, "Portuguese");
		
	float numero;
	
	printf("Digite um número: ");
	scanf("%f", &numero);
	
	if(numero >= 100 && numero <= 200)
	{
		printf("%.2f está entre 100 e 200.", numero);
	}
	else
	{
		printf("%.2f não está entre 100 e 200.", numero);
	}
		
	return 0;
}
