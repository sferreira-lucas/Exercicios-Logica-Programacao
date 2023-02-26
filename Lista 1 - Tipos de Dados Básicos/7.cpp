#include <stdio.h>
#include <locale.h>

int main()
{
	/*7) Elabore um programa que efetue a leitura de três valores inteiros (A, B e C) e apresente 
como resultado final o quadrado da soma dos três valores lidos
*/

	setlocale(LC_ALL, "Portuguese");
	
	int  a, b , c, soma;
	
	printf("Digite o valor de A: \n");
	scanf("%i", &a);
	
	printf("Digite o valor de B: \n");
	scanf("%i", &b);
	
	printf("Digite o valor de C: \n");
	scanf("%i", &c);
	
	soma = a + b + c;
	soma = soma * soma;
	
	printf("A área do quadrado é: %i \n", soma);
	
	
	return 0;
}
