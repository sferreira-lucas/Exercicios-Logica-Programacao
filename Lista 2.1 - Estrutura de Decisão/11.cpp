#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Numa faculdade, os alunos com m�dia maior ou igual a 7,0 s�o aprovados, aqueles
com m�dia inferior a 3,0 s�o reprovados e os demais ficam de recupera��o. Dadas as duas
notas de um aluno, informe sua situa��o. Emitir as mensagens aprovado, reprovado e
recupera��o, respectivamente.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float media, nota1, nota2;
	int nNota = 1, qtdNotas = 2;
	
	printf("Digite sua %i� nota: ", nNota++);
	scanf("%f", &nota1);
	
	printf("Digite sua %i� nota: ", nNota++);
	scanf("%f", &nota2);
	
	printf("---------\n");
	
	media = (nota1 + nota2) / qtdNotas;
	
	if(media >= 7)
	{
		printf("M�dia = %.2f\n", media);
		printf("Aprovado!");
	}
	else if(media < 3)
	{
		printf("M�dia = %.2f\n", media);
		printf("Reprovado!");
	}
	else
	{
		printf("M�dia = %.2f\n", media);
		printf("Recupera��o!");
	}
	
	return 0;
}
