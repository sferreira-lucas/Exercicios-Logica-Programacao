#include <stdio.h>
#include <locale.h>

int main()
{
	/*8 - A prefeitura de Contagem abriu uma linha de crédito para os funcionários estatutários. 
	O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um 
	algoritmo que permita entrar com o salário bruto e o valor da prestação, e informar se o 
	empréstimo pode ou não ser concedido.
	*/

	setlocale(LC_ALL, "Portuguese");
	
	float salarioBruto, valorParcelas, porcentagem;
	
	printf("Informe o seu salário bruto:\n");
	scanf("%f", &salarioBruto);
	
	printf("Informe o valor da prestação:\n");
	scanf("%f", &valorParcelas);
	
	porcentagem = (valorParcelas / salarioBruto) * 100;
	
	printf("%.2f%% do salário bruto\n", porcentagem);
	
	if(porcentagem < 30)
	{
		printf("O empréstimo pode ser concedido!");
	}
	else
	{
		printf("O empréstimo não pode ser concedido pois ultrapassa o limite de 30%% do salário bruto!");
	}
	
	return 0;
}
