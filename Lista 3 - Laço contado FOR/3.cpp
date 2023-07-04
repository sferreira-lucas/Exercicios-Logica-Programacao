#include <stdio.h>
#include <locale.h>

int main()
{
	/*Escreva um programa em C que lê 15 valores reais, encontra o maior e o 
menor deles e mostra o resultado.*/
	 
	setlocale(LC_ALL, "Portuguese");
		
	float num, valor, maior, menor;
	int qdtValores = 15, count = 1;
	
	for(num = 1; num <= qdtValores; num++)
	{
		printf("Digite o %iº/15 valor: ", count++);
		scanf("%f", &valor);
		
		if(valor > maior)
		{
			maior = valor;
		}
		if(menor < valor)
		{
			valor = menor;
		}
	}
	
	printf("O maior valor é: %.2f\n", maior);
	printf("O menor valor é: %.2f\n", menor);
	
	return 0;
}
