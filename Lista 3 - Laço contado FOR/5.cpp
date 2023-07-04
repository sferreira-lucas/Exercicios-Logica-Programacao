#include <stdio.h>
#include <locale.h>

int main()
{
	//Escreva um programa que apresenta os n�meros divisores de um n�mero.
	
	setlocale(LC_ALL, "Portuguese");
	int numero;

    printf("Informe um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("Divisores de %d: ", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
