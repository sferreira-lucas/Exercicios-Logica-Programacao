#include <stdio.h>
#include <locale.h>

int main()
{
	//Erro no Else if 2
	
	//14) Fa�a um programa que leia tr�s n�meros e mostre o maior e o menor deles. 
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, num3;
	int count = 1;
	
	printf("Digite o %i� numero: \n", count++);
	scanf("%f", &num1);
	
	printf("Digite o %i� numero: \n", count++);
	scanf("%f", &num2);
	
	printf("Digite o %i� numero: \n", count++);
	scanf("%f", &num3);
	
	if(num1 > num2 || num1 > num3)
	{
		printf("%.2f � maior do que %.2f e %.2f.\n", num1, num2, num3);
	}
	else if(num2 > num1 || num2 > num3)
	{
		printf("%.2f � maior do que %.2f e %.2f.\n", num2, num1, num3);
	}
	else if(num3 > num2 || num3 > num1)
	{
		printf("%.2f � maior do que %.2f e %.2f.\n", num3, num1, num2);	
	}
	else
	{
		printf("N�meros informados s�o todos iguais!\n");
	}
	
	return 0;
}
