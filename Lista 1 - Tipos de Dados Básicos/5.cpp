#include <stdio.h>
#include <locale.h>

int main()
{
	/*5) Fa�a um programa que calcule e mostre a �rea de um c�rculo. Para isso, a seguinte 
f�rmula deve ser usada: A = PI * R2.
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	float area, pi = 3.14, raio;
	
	printf("Digite o raio do circulo: \n");
	scanf("%f", &raio);
	
	area = pi * raio;
	
	printf("A �rea do circulo �: %.2fm\n", area);
	
	
	return 0;
}
