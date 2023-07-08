#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	2 - Escrever um programa que receba vários números inteiros no teclado. E no 
	final imprimir a média dos números múltiplos de 3. Para sair digitar 0 (zero).
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
    int soma = 0;
    int contador = 0;

    printf("Informe um número inteiro (digite 0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) 
	{
		printf("Informe um número inteiro (digite 0 para sair): ");
        scanf("%d", &numero);
        
        if (numero % 3 == 0) 
		{
            soma = soma + numero;
            contador++;
        }
        
    }

    if (contador > 0) 
	{
        float media = (float)soma / contador;
        printf("A média dos números múltiplos de 3 é: %.2f\n", media);
    } 
	else 
	{
        printf("Nenhum número múltiplo de 3 foi inserido.\n");
    }

    return 0;
}
