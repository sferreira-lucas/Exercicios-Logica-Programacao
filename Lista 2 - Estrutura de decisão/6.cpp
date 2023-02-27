#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	6) Escreva um programa para ler as três notas obtidas por um aluno durante 
		o semestre. Calcular a sua média (aritmética) e informar a sua menção Aprovado (media 
		>= 7), Reprovado (media <= 5) e Recuperação (media entre 5.1 e 6.9)
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	int semestre = 1;
	
	printf("Digite sua nota do %iº semestre: ", semestre++);
	scanf("%f", &nota1);
	
	printf("Digite sua nota do %iº semestre: ", semestre++);
	scanf("%f", &nota2);
	
	printf("Digite sua nota do %iº semestre: ", semestre++);
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	printf("Média = %.2f\n", media);
	
	if(media >= 7)
	{
		printf("Aprovado");
	}
	else if(media > 5)
	{
		printf("Recuperação");
	}
	else
	{
		printf("Recuperação");
	}
	
	return 0;
}
