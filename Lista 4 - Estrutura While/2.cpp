#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	2 - Escrever um programa que receba v�rios n�meros inteiros no teclado. E no 
	final imprimir a m�dia dos n�meros m�ltiplos de 3. Para sair digitar 0 (zero).
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
    int soma = 0;
    int contador = 0;

    printf("Informe um n�mero inteiro (digite 0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) 
	{
		printf("Informe um n�mero inteiro (digite 0 para sair): ");
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
        printf("A m�dia dos n�meros m�ltiplos de 3 �: %.2f\n", media);
    } 
	else 
	{
        printf("Nenhum n�mero m�ltiplo de 3 foi inserido.\n");
    }

    return 0;
}
