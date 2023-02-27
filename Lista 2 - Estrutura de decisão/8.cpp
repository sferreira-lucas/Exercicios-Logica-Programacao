#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
		Um posto de combust�vel vende tr�s tipos de combust�vel: �lcool, diesel e gasolina. O 
	pre�o de cada litro de combust�vel � apresentado na tabela a seguir. Fa�a um programa 
	que leia um caractere que representa o tipo de combust�vel comprado (a, d ou g) e a 
	quantidade em litros. O programa deve imprimir o valor em reais a ser pago pelo 
	combust�vel
	
	Alcool = 1,7997
	Diesel = 0,9798
	Gasolina = 2,1009
	*/
	setlocale(LC_ALL, "Portuguese");
	
	char combustivel;
	float alcool = 1.7997, diesel = 0.9798, gasolina = 2.1009, valor, litros;
	
	printf("A - �lcool por R$1,7997\nD - diesel por R$0,9798\nG - gasolina: R$2,1009\n\n");
	printf("Combustivel desejado: ");
	scanf("%c", &combustivel);
	
	printf("Quantidade desejada(em litros): ");
	scanf("%f", &litros);
	
	if(combustivel == 'a')
	{
		valor = litros * alcool;
		printf("Combustivel: �lcool\nLitros: %.2f\nPre�o: R$%.3f", litros, valor);
	}
	else if(combustivel == 'd')
	{
		valor = litros * diesel;
		printf("Combustivel: Gasolina\nLitros: %.2f\nPre�o: R$%.3f", litros, valor);
	}
	else if(combustivel == 'g')
	{
		valor = litros * gasolina;
		printf("Combustivel: Gasolina\nLitros: %.2f\nPre�o: R$%.3f", litros, valor);
	}
	else
	{
		printf("Op��o inv�lida. Tente novamente!");
	}
	
	return 0;
}
