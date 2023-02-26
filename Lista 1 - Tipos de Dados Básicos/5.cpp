#include <stdio.h>
#include <locale.h>

int main()
{
	/*5) Faça um programa que calcule e mostre a área de um círculo. Para isso, a seguinte 
fórmula deve ser usada: A = PI * R2.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	float area, pi = 3.14, raio;
	
	printf("Digite o raio do circulo: \n");
	scanf("%f", &raio);
	
	area = pi * raio;
	
	printf("A área do circulo é: %.2fm\n", area);
	
	
	return 0;
}
