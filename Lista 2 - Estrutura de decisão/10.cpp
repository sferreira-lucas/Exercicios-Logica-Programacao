#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	10) Imagine uma prova com 100 questões, em que cada uma delas vale 1 ponto. Nesse 
	caso, faça um programa para divulgar o resultado a partir de conceitos, de acordo com a 
	seguinte tabela: 
		
		<= 50 D
		> 50 C
		> 70 B
		> 90 A
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int questoes;
	
	printf("Quantas questões você acertou?\n");
	scanf("%i", &questoes);
	
	if(questoes < 50)
	{
		printf("nota D");
	}
	else if(questoes <= 70)
	{
		printf("Nota C");
	}
	else if(questoes <= 90)
	{
		printf("Nota B");
	}
	else if(questoes <= 100)
	{
		printf("Nota A");
	}
	else
	{
		printf("A prova possui um total de 100 questões. Digite outro valor!");
	}
	return 0;
}
