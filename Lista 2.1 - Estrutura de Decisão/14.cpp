#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o
valor da compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Elabore
um algoritmo que leia o valor do produto e imprima o valor de venda para o produto.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float valorProduto, lucro;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valorProduto);
	
	if(valorProduto <= 20)
	{
		lucro = valorProduto + (valorProduto * 0.45);
		printf("valor de venda com 45%% de lucro: %.2f", lucro);
	}
	else
	{
		lucro = valorProduto + (valorProduto * 0.30);
		printf("valor de venda com 30%% de lucro: %.2f", lucro);
	}
	return 0;
}
