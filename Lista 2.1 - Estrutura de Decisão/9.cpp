#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Construa um algoritmo para determinar se o indiv�duo esta com um peso favor�vel.
Essa situa��o � determinada atrav�s do IMC (�ndice de Massa Corp�rea), que � definida
como sendo a rela��o entre o peso (PESO) e o quadrado da Altura (ALTURA) do
indiv�duo.
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
		printf("Obeso m�rbido");
	}
	else
	{
		printf("Abaixo do peso");
	}
	
	return 0;
}
