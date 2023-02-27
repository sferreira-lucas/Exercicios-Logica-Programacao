#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	1) Faça um programa que receba um número e mostre uma mensagem caso este número 
	seja maior que 10. 
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Digite um número: \n");
	scanf("%f", &numero);
	
	if(numero > 10)
	{
		printf("%.1f é maior do que 10.", numero);
	}
	else
	{
		printf("%.1f não é maior do que 10.", numero);
	}
	
	return 0;
}
