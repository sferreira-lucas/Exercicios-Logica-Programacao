#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	7 - Em uma empresa paga-se R$ 19,50 a hora e recolhe-se para o imposto de renda 10% 
	dos sal�rios acima de R$ 1500,00. Dado o n�mero de horas trabalhadas por um 
	funcion�rio, informar o valor do seu sal�rio l�quido.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float salarioHora = 19.50, imposto = 0.1, hora, salario;
	
	printf("Quantas horas voc� trabalhou?\n");
	scanf("%f", &hora);
	
	
	if(salario >= 1500)
	{
		salario = salarioHora * hora;
		salario = salario - (salario * imposto);
		
		printf("Sal�rio liquido: R$%.2f", salario);	
	}
	else
	{
		salario = salarioHora * hora;
		printf("Sal�rio liquido: R$%.2f", salario);
	}
	
	
	return 0;
}
