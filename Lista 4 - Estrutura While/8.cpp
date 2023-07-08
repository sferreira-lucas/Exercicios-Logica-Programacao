#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Solicitar um n�mero entre 1 e 4. Se a pessoas digitar um n�mero diferente,
mostrar a mensagem "entrada inv�lida" e solicitar o n�mero novamente. Se
digitar correto mostrar o n�mero digitado.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um n�mero entre 1 e 4: ");
	
	while(true)
	{
		scanf("%i", &numero);
		
		if(numero >= 1 && numero <= 4)
		{
			printf("Entrada valida: %i\n", numero);
		}
		else
		{
			printf("Entrada inv�lida\n");
		}
	}
	
	return 0;
}
