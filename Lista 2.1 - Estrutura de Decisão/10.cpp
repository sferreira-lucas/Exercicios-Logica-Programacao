#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	Faça um algoritmo para ler três valores reais e informar se estes podem ou não formar
os lados de um triângulo e qual tipo de triângulo seria: equilátero, isósceles ou escaleno.
Obs: E no caso do usuário informar algum dos lados maior que a soma dos outros 2 lados
configura uma figura geométrica que não caracteriza um triângulo
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int nLado = 1;
	float lado1, lado2, lado3;
	
	printf("Digite o %iº lado: ", nLado++);
	scanf("%f", &lado1);
	
	printf("Digite o %iº lado: ", nLado++);
	scanf("%f", &lado2);
	
	printf("Digite o %iº lado: ", nLado++);
	scanf("%f", &lado3);
	
	if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2)
	{
		if(lado1 == lado2 && lado1 == lado3)
		{
			printf("Triângulo equilátero");
		}
		else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
		{
			printf("Triângulo isósceles");
		}
		else if(lado1 != lado2 && lado1 != lado3)
		{
			printf("Triângulo escaleno");
		}
	}
	else
	{
		printf("Não é um triângulo");
	}
	
	return 0;
}
