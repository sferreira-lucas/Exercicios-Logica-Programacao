#include <stdio.h>
#include <locale.h>

int main()
{
	//3) Faça um programa para calcular a área de um quadrado.
	setlocale(LC_ALL, "Portuguese");
	
	float area, lado;
	
	printf("Digite a medido do lado do quadrado(em metros): \n");
	scanf("%f", &lado);
	
	area = lado * lado;
	
	printf("A área do quadrado é: %.2fm\n", area);
	
	
	return 0;
}
