#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	12) Fa�a um programa para ler tr�s n�meros e informar se eles podem ou n�o ser lados 
de um tri�ngulo. Caso os lados formem um tri�ngulo, indique se o mesmo �: equil�tero, 
is�sceles ou escaleno. Observa��o: Um tri�ngulo � equil�tero quando possui os tr�s lados 
iguais, is�sceles quando possui dois lados iguais e escaleno quando n�o possui nenhum 
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
		printf("Trianguloo is�celes");
	}
	else if(num1 != num2 && num1 != num3 && num2 != num3)
	{
		printf("Trianguloo escaleno");
	}
	else
	{
		printf("N�o � um triangulo!");
	}
	return 0;
}
