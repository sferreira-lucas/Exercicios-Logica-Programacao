#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	1) Fa�a um programa que receba tr�s notas,
	 calcule e mostre a m�dia aritm�tica entre elas.
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
	printf("Sua m�dia �: %.2f\n", media);
	
	
	return 0;
}
