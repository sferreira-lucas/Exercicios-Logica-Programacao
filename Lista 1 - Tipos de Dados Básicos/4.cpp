#include <stdio.h>
#include <locale.h>

int main()
{
	//4) Faça um programa para calcular a área de um retângulo
	setlocale(LC_ALL, "Portuguese");
	
	float area, altura, base;
	
	printf("Digite a medida da base do retangulo(em metros): \n");
	scanf("%f", &base);
	
	printf("Digite a medida da altura do retangulo(em metros): \n");
	scanf("%f", &altura);
	
	area = base * altura;
	
	printf("A área do retangulo é: %.2fm\n", area);
	
	
	return 0;
}
