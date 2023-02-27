#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	/*4) Desenvolva um programa que solicite dois números inteiros, mostre a soma destes 
números, e avise se a soma é maior, menor ou igual a 1000. 
	*/
	
	float valor1, valor2, soma, valorSoma = 1000;
	int count = 1;
	
	printf("Digite o %iº valor: \n", count++);
	scanf("%f", &valor1);
	
	printf("Digite o %iº valor: \n", count++);
	scanf("%f", &valor2);
	
	soma = valor1 + valor2;
	printf("Soma: %.2f\n", soma);
	
	if(soma > valorSoma)
	{
		printf("%.2f é maior do que %.2f.\n", soma, valorSoma);
	}
	else if(soma == valorSoma)
	{
		printf("%.2f é igual a %.2f.\n", soma, valorSoma);
	}
	else
	{
		printf("%.2f é menor do que 1000", soma, valorSoma);
	}
	return 0;
}
