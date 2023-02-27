#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	2) Faça um programa que receba o sexo como dado de entrada e informe se o usuário é 
homem ou mulher
	*/
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	printf("Digite F ou M:\n");
	scanf("%c", &letra);
	
	if(letra == 'm')
	{
		printf("Masculino.");
	}
	else if(letra == 'f')
	{
		printf("Feminino");
	}
	else
	{
		printf("Inválido");
	}
	
	return 0;
}
