#include <stdio.h>
#include <locale.h>

int main()
{
	/*8 - A prefeitura de Contagem abriu uma linha de cr�dito para os funcion�rios estatut�rios. 
	O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fazer um 
	algoritmo que permita entrar com o sal�rio bruto e o valor da presta��o, e informar se o 
	empr�stimo pode ou n�o ser concedido.
	*/

	setlocale(LC_ALL, "Portuguese");
	
	float salarioBruto, valorParcelas, porcentagem;
	
	printf("Informe o seu sal�rio bruto:\n");
	scanf("%f", &salarioBruto);
	
	printf("Informe o valor da presta��o:\n");
	scanf("%f", &valorParcelas);
	
	porcentagem = (valorParcelas / salarioBruto) * 100;
	
	printf("%.2f%% do sal�rio bruto\n", porcentagem);
	
	if(porcentagem < 30)
	{
		printf("O empr�stimo pode ser concedido!");
	}
	else
	{
		printf("O empr�stimo n�o pode ser concedido pois ultrapassa o limite de 30%% do sal�rio bruto!");
	}
	
	return 0;
}
