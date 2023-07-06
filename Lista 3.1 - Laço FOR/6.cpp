#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprima
todos os números pares no intervalo aberto e seu somatório. Suponha que os dados
digitados são para um intervalo crescente, ou seja, o primeiro valor é menor que o
segundo.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int i, limiteSup, limiteInf, somatorio;
	
	printf("Digite o limite inferior: ");
	scanf("%i", &limiteInf);
	
	printf("Digite o limite superior: ");
	scanf("%i", &limiteSup);
	
for (int i = limiteInf + 1; i < limiteSup; i++) 
{
        if (i % 2 == 0) 
		{
            printf("%d\n", i);
            somatorio += i;
        }
    }

    printf("Somatorio dos numeros pares: %d\n", somatorio);

    return 0;
}
