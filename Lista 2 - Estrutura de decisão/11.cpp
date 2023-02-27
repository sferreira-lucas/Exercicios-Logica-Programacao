#include <stdio.h>
#include <locale.h>

int main()
{
	/* ESSE EXERCICIO NAO FAZ SENTIDO
	11) Tendo como dados de entrada a altura e o sexo de uma pessoa, faça um programa que 
	calcule seu peso ideal, utilizando as seguintes fórmulas: 
	- para homens: (72.7 * h) - 58; 
	- para mulheres: (62.1 * h) - 44.7.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float altura, valorM = 72.7, valorF = 62.1, valor2M = 58, valor2F = 44.7, pesoIdeal;
	char sexo;
	
	printf("Digite seu sexo: \n");
	scanf("%c", &sexo);
	
	printf("Digite sua altura(em m): \n");
	scanf("%f", &altura);
	
	if(sexo == 'm')
	{
		pesoIdeal = (valorM * altura) - valor2M;
		printf("Peso ideal: %.2fKg.\n", pesoIdeal);
	}
	else if(sexo == 'f')
	{
	pesoIdeal = (valorF * altura) - valor2F;
	printf("Peso ideal: %.2fKg.\n", pesoIdeal);
	}
	else
	{
		printf("Sexo inválido.");
	}
	
	
	return 0;
}
