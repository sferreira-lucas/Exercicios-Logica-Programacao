#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Fa�a um programa que mostre na tela todos os n�meros de 1 a 50 e depois 
essa mesma lista invertida (50 a 1) usando la�o for
	*/
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nN�meros de 1 a 50\n");
	
	for(int num = 0; num <= 50; num++)
	{
		printf("%d\n", num);
	}
	
	printf("\nN�meros de 50 a 1\n");
	
	for(int num2 = 50; num2 >= 0; num2--)
	{
		printf("%d\n", num2);
	}
}
