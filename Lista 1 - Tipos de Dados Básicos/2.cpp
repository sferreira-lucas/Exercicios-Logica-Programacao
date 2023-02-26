#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	2) Faça um programa que receba três notas e seus respectivos
	 pesos, calcule e mostre a média ponderada desses valores.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int nota = 1;
	float nota1, nota3, nota2, media, peso1, peso2, peso3, somaPeso;
	
	printf("Digite sua %i nota: \n", nota++);
	scanf("%f", &nota1);
	
	printf("Digite o peso dessa nota: \n");
	scanf("%f", &peso1);
	
	printf("Digite sua %i nota: \n", nota++);
	scanf("%f", &nota2);
	
	printf("Digite o peso dessa nota: \n");
	scanf("%f", &peso2);
	
	printf("Digite sua %i nota: \n", nota++);
	scanf("%f", &nota3);
	
	printf("Digite o peso dessa nota: \n");
	scanf("%f", &peso3);
	
	somaPeso = peso1 + peso2 + peso3;
	
	media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / somaPeso;
	printf("Sua média é: %.2f\n", media);
	
	
	return 0;
}
