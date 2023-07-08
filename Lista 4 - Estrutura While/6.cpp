#include <stdio.h>
#include <locale.h>

int main() {

	/*
	Faça um programa que dada uma quantia de dinheiro em libras inglesas
imprime o equivalente em dólares canadenses. A relação é £1,0 = $1,84. Depois
disso, pergunte se o usuário quer ou não transformar mais algum valor; se não
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
    
  	 	printf("%.2f Libras Inglesa é quivalente a %.2f doláres canadenses\n", valorLibraIng, conversao);
		
		printf("Deseja fazer outra conversão?(S/N):");
		scanf(" %c", &resposta);
	}
	
    
    return 0;
}

