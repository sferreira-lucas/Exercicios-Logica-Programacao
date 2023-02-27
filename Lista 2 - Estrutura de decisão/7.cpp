#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	7) Desenvolva um programa para calcular e mostrar o desconto no valor de uma compra 
(fornecido pelo usuário), de acordo com a tabela:
		
		>= 100 = 10%
		> 1000 < 5000 = 20%
		> 5000 = 30%
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	float valorCompra, valorTotal, desconto;
	
	printf("Digite o valor gasto: ");
	scanf("%f", &valorCompra);
	
	if(valorCompra > 5000)
	{
		desconto = valorCompra * 0.3;
		valorTotal = valorCompra - desconto;
		printf("Desconto: R$%.2f\n", desconto);
		printf("Valor total: R$%.2f\n", valorTotal);
	}
	else if(valorCompra> 1000)
	{
		desconto = valorCompra * 0.2;
		valorTotal = valorCompra - desconto;
		printf("Desconto: R$%.2f\n", desconto);
		printf("Valor total: R$%.2f\n", valorTotal);
	}
	else
	{
		desconto = valorCompra * 0.1;
		valorTotal = valorCompra - desconto;
		printf("Desconto: R$%.2f\n", desconto);
		printf("Valor total: R$%.2f\n", valorTotal);
	}
	
	
	return 0;
}
