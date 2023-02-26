#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	1) Faça um programa que receba três notas,
	 calcule e mostre a média aritmética entre elas.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int nota = 1;
	float nota1, nota3, nota2, media;
	
	printf("Digite sua %i nota: \n", nota++);
	scanf("%f", &nota1);
	
	printf("Digite sua %i nota: \n", nota++);
	scanf("%f", &nota2);
	
	printf("Digite sua %i nota: \n", nota++);
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/ 3;
	printf("Sua média é: %.2f\n", media);
	
	
	return 0;
}
