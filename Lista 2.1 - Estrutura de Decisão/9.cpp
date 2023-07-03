#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Construa um algoritmo para determinar se o indivíduo esta com um peso favorável.
Essa situação é determinada através do IMC (Índice de Massa Corpórea), que é definida
como sendo a relação entre o peso (PESO) e o quadrado da Altura (ALTURA) do
indivíduo.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
	
	printf("IMC = %.2f\n", imc);
	
	if(imc >= 20 && imc < 25)
	{
		printf("Peso normal");
	}
	else if(imc >= 25 && imc < 30)
	{
		printf("Sobre peso");
	}
	else if(imc >= 30 && imc < 40)
	{
		printf("Obeso");
	}
	else if(imc >= 40)
	{
		printf("Obeso mórbido");
	}
	else
	{
		printf("Abaixo do peso");
	}
	
	return 0;
}
