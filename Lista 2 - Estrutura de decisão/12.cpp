#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	12) Faça um programa para ler três números e informar se eles podem ou não ser lados 
de um triângulo. Caso os lados formem um triângulo, indique se o mesmo é: equilátero, 
isósceles ou escaleno. Observação: Um triângulo é equilátero quando possui os três lados 
iguais, isósceles quando possui dois lados iguais e escaleno quando não possui nenhum 
dos lados iguais.
*/

	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3,count = 1;
	
	printf("Digite a medida do lado %i\n", count++);
	scanf("%i", &num1);
	
	printf("Digite a medida do lado %i\n", count++);
	scanf("%i", &num2);
	
	printf("Digite a medida do lado %i\n", count++);
	scanf("%i", &num3);
	
	if(num1 == num2 && num2 == num3)
	{
		printf("Triangulo equilatero");
	}
	else if(num1 == num2 && num1 != num3 && num2 != num3)
	{
		printf("Trianguloo isóceles");
	}
	else if(num1 != num2 && num1 != num3 && num2 != num3)
	{
		printf("Trianguloo escaleno");
	}
	else
	{
		printf("Não é um triangulo!");
	}
	return 0;
}
