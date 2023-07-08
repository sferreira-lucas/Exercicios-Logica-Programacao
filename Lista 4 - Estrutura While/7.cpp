#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	7 - Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos
de 21 anos. Total de pessoas com mais de 50 anos. O programa termina quando
idade for = -99.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, contadorJovem = 0, contadorVelho = 0;
	
	printf("Digite -99 para encerrar\n");
	
	while(1)
	{
		printf("Digite sua idade: ");
		scanf("%i", &idade);
	
		if(idade == -99)
		{
			break;
		}
		
		if(idade < 0)
		{
			printf("Idade não pode ser menor do 0(zero)\n");
		}
		else
		{
			if(idade < 21)
			{
				contadorJovem++;
			}
			else if(idade > 50)
			{
				contadorVelho++;
			}
		}
		
	}
	
	printf("Idades menores do que 21: %i\n", contadorJovem);
	printf("Idades maiores do que 50: %i\n", contadorVelho);
	
	return 0;
}
