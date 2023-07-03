#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	Fa�a um algoritmo para ler tr�s valores reais e informar se estes podem ou n�o formar
os lados de um tri�ngulo e qual tipo de tri�ngulo seria: equil�tero, is�sceles ou escaleno.
Obs: E no caso do usu�rio informar algum dos lados maior que a soma dos outros 2 lados
configura uma figura geom�trica que n�o caracteriza um tri�ngulo
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int nLado = 1;
	float lado1, lado2, lado3;
	
	printf("Digite o %i� lado: ", nLado++);
	scanf("%f", &lado1);
	
	printf("Digite o %i� lado: ", nLado++);
	scanf("%f", &lado2);
	
	printf("Digite o %i� lado: ", nLado++);
	scanf("%f", &lado3);
	
	if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2)
	{
		if(lado1 == lado2 && lado1 == lado3)
		{
			printf("Tri�ngulo equil�tero");
		}
		else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
		{
			printf("Tri�ngulo is�sceles");
		}
		else if(lado1 != lado2 && lado1 != lado3)
		{
			printf("Tri�ngulo escaleno");
		}
	}
	else
	{
		printf("N�o � um tri�ngulo");
	}
	
	return 0;
}
