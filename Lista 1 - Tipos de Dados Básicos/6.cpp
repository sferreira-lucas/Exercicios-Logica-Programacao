#include <stdio.h>
#include <locale.h>

int main()
{
	/*6) Elabore um programa que efetue a leitura de tr�s valores inteiros (A, B e C) e apresente 
como resultado final a soma dos quadrados dos tr�s valores lidos.
*/

	setlocale(LC_ALL, "Portuguese");
	
	int  a, b , c, soma;
	
	printf("Digite o valor de A: \n");
	scanf("%i", &a);
	
	printf("Digite o valor de B: \n");
	scanf("%i", &b);
	
	printf("Digite o valor de C: \n");
	scanf("%i", &c);
	
	soma = (a*a) + (b*b) + (c*c);
	
	printf("A �rea do quadrado �: %i \n", soma);
	
	
	return 0;
}
