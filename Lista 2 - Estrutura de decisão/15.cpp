#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Fa�a um programa para calcular o peso ideal, a partir da f�rmula IMC = peso / altura2. 
Nesse caso, solicite o peso e a altura do usu�rio, fa�a o c�lculo e apresente a faixa de risco 
correspondente, de acordo com a tabela seguinte:
*/

	setlocale(LC_ALL, "Portuguese");
	
	float imc, peso, altura;
	
	printf("Qual o seu peso(em Kg)?\n");
	scanf("%f", &peso);
	
	printf("Qual a sua altura(em m)?\n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("IMC: %.2f \n", imc);

	if(imc > 20 )
	{
		printf("Normal.\n");
	}
	else if(imc > 25 )
	{
		printf("Excesso de peso.\n");
	}
	else if (imc > 30 )
	{
		printf("Obesidade.\n");
	}
	else if(imc > 35)
	{
		printf("Obesidade m�rbida.\n");
	}
	else
	{
		printf("Abaixo do peso.\n");
	}
	
	
	return 0;
}
