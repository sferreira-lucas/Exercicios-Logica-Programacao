#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Elabore um programa, que solicite ao usu�rio a velocidade do ve�culo e apresente na 
	tela a penalidade, de acordo com a tabela a seguir:
	>= 60 = Sem multa;
	> 60 ou <= 80 multa leva
	> 80 ou <= 100 multa grave
	> 100 ou <= 120 gravissima
	> 120 deten��o
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int velocidade;
	
	printf("Qual velocidade voc� estava?\n");
	scanf("%i", &velocidade);
	
	if(velocidade > 120)
	{
		printf("Deten��o do condutor!");
	}
	else if(velocidade > 100)
	{
		printf("Multa grav�ssima!");
	}
	else if(velocidade > 80)
	{
		printf("Multa grave!");
	}
	else if(velocidade > 60)
	{
		printf("Multa leve!");
	}
	else
	{
		printf("Sem penalidade");
	}
	return 0;
}
