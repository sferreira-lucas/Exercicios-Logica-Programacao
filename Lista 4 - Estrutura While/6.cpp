#include <stdio.h>
#include <locale.h>

int main() {

	/*
	Fa�a um programa que dada uma quantia de dinheiro em libras inglesas
imprime o equivalente em d�lares canadenses. A rela��o � �1,0 = $1,84. Depois
disso, pergunte se o usu�rio quer ou n�o transformar mais algum valor; se n�o
quiser, encerre.
	*/
	setlocale(LC_ALL, "Portuguese");
    
    float conversao, valorLibraIng, valorDolarCana = 1.84;
    char resposta = 'S';
    
    while(resposta == 's' || resposta == 'S')
    {
    	printf("Digite o valor em Libras Inglesas: ");
    	scanf("%f", &valorLibraIng);
    
   		conversao = valorLibraIng * valorDolarCana;
    
  	 	printf("%.2f Libras Inglesa � quivalente a %.2f dol�res canadenses\n", valorLibraIng, conversao);
		
		printf("Deseja fazer outra convers�o?(S/N):");
		scanf(" %c", &resposta);
	}
	
    
    return 0;
}

