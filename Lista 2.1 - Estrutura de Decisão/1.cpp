#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	1 - Construir um algoritmo que leia dois n�meros e efetue a adi��o. Caso o valor somado 
	seja maior que 20, este dever� ser apresentado somando-se a ele mais 8; caso o valor 
	somado seja menor ou igual a 20, este dever� ser apresentado subtraindo-se 5
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, resultado, valor1 = 8, valor2 = 5;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num1);
	
	printf("Digite outro n�mero: ");
	scanf("%i", &num2);
	
	resultado = num1 + num2;
	printf("%i\n", resultado);
	
	if(resultado > 20)
	{
		resultado = resultado + valor1;
		printf("%i\n", resultado);
	}
	else
	{
		resultado = resultado - valor2;
		printf("%i\n", resultado);
	}
	
	return 0;
}
