#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	Numa faculdade, os alunos com média maior ou igual a 7,0 são aprovados, aqueles
com média inferior a 3,0 são reprovados e os demais ficam de recuperação. Dadas as duas
notas de um aluno, informe sua situação. Emitir as mensagens aprovado, reprovado e
recuperação, respectivamente.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float media, nota1, nota2;
	int nNota = 1, qtdNotas = 2;
	
	printf("Digite sua %iº nota: ", nNota++);
	scanf("%f", &nota1);
	
	printf("Digite sua %iº nota: ", nNota++);
	scanf("%f", &nota2);
	
	printf("---------\n");
	
	media = (nota1 + nota2) / qtdNotas;
	
	if(media >= 7)
	{
		printf("Média = %.2f\n", media);
		printf("Aprovado!");
	}
	else if(media < 3)
	{
		printf("Média = %.2f\n", media);
		printf("Reprovado!");
	}
	else
	{
		printf("Média = %.2f\n", media);
		printf("Recuperação!");
	}
	
	return 0;
}
