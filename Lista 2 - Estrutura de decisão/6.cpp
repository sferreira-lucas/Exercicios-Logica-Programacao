#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	6) Escreva um programa para ler as tr�s notas obtidas por um aluno durante 
		o semestre. Calcular a sua m�dia (aritm�tica) e informar a sua men��o Aprovado (media 
		>= 7), Reprovado (media <= 5) e Recupera��o (media entre 5.1 e 6.9)
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	int semestre = 1;
	
	printf("Digite sua nota do %i� semestre: ", semestre++);
	scanf("%f", &nota1);
	
	printf("Digite sua nota do %i� semestre: ", semestre++);
	scanf("%f", &nota2);
	
	printf("Digite sua nota do %i� semestre: ", semestre++);
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	printf("M�dia = %.2f\n", media);
	
	if(media >= 7)
	{
		printf("Aprovado");
	}
	else if(media > 5)
	{
		printf("Recupera��o");
	}
	else
	{
		printf("Recupera��o");
	}
	
	return 0;
}
