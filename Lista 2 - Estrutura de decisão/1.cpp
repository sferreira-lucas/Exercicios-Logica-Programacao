#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	1) Fa�a um programa que receba um n�mero e mostre uma mensagem caso este n�mero 
	seja maior que 10. 
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Digite um n�mero: \n");
	scanf("%f", &numero);
	
	if(numero > 10)
	{
		printf("%.1f � maior do que 10.", numero);
	}
	else
	{
		printf("%.1f n�o � maior do que 10.", numero);
	}
	
	return 0;
}
