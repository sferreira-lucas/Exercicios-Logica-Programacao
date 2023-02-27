#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	7 - Em uma empresa paga-se R$ 19,50 a hora e recolhe-se para o imposto de renda 10% 
	dos salários acima de R$ 1500,00. Dado o número de horas trabalhadas por um 
	funcionário, informar o valor do seu salário líquido.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float salarioHora = 19.50, imposto = 0.1, hora, salario;
	
	printf("Quantas horas você trabalhou?\n");
	scanf("%f", &hora);
	
	
	if(salario >= 1500)
	{
		salario = salarioHora * hora;
		salario = salario - (salario * imposto);
		
		printf("Salário liquido: R$%.2f", salario);	
	}
	else
	{
		salario = salarioHora * hora;
		printf("Salário liquido: R$%.2f", salario);
	}
	
	
	return 0;
}
