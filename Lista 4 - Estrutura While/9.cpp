#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*	
		Faça um programa que receba a idade e o peso de pessoas, calcule e mostre:
	• A quantidade de pessoas com mais de 90 quilos;
		• A média das idades das 7 pessoas.
	• A quantidade de pessoas maiores de idade e abaixo de 60 quilos.
	• A porcentagem de pessoas com idade entre 10 e 30 anos.
	Obs: O programa encerra quando digitado uma idade negativa.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, contador = 0, contadorMassa = 0, contadorMassa2 = 0;
	float massa, media = 0, porcentagem;
	
	while(true)
	{
		contador++;
		
		printf("Digite seu peso(em kg): ");
		scanf("%f", &massa);
		
		printf("Digite sua idade: ");
		scanf("%i", &idade);
		
		if(idade < 0)
		{
			break;
		}
		
		if(massa > 90)
		{
			contadorMassa++;
		}
		
		if(idade >= 18 && massa < 60)
		{
			contadorMassa2++;
		}
		
		if(idade >= 10 && idade <= 30)
		{
			porcentagem = contador / 100; 
		}
	}
	
	printf("Contador > 90: %i\n", contadorMassa);
	printf("Contador >= 18 e massa < 60: %i\n", contadorMassa2);
	printf("Contador porcentagem: %i\n", contadorMassa2);
	
	return 0;
}
