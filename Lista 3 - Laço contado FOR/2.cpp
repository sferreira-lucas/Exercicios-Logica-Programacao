#include <stdio.h>
#include <locale.h>

int main() 
{
	//Faça um programa que calcule a soma dos primeiros 50 números pares.
	
	setlocale(LC_ALL, "Portuguese");
	
   int soma = 0;

    for (int i = 0, contador = 0; contador < 50; i += 2) 
	{
        soma += i;
        contador++;
    }

    printf("A soma dos primeiros 50 números pares é: %d\n", soma);

    return 0;
}

