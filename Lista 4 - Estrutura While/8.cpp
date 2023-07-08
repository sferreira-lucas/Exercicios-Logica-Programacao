#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Solicitar um número entre 1 e 4. Se a pessoas digitar um número diferente,
mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se
digitar correto mostrar o número digitado.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número entre 1 e 4: ");
	
	while(true)
	{
		scanf("%i", &numero);
		
		if(numero >= 1 && numero <= 4)
		{
			printf("Entrada valida: %i\n", numero);
		}
		else
		{
			printf("Entrada inválida\n");
		}
	}
	
	return 0;
}
