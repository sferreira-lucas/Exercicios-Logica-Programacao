#include <stdio.h>
#include <locale.h>

int main()
{
	//4) Fa�a um programa para calcular a �rea de um ret�ngulo
	setlocale(LC_ALL, "Portuguese");
	
	float area, altura, base;
	
	printf("Digite a medida da base do retangulo(em metros): \n");
	scanf("%f", &base);
	
	printf("Digite a medida da altura do retangulo(em metros): \n");
	scanf("%f", &altura);
	
	area = base * altura;
	
	printf("A �rea do retangulo �: %.2fm\n", area);
	
	
	return 0;
}
