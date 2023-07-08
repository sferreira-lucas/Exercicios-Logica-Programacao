#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	Faça um programa que leia as médias finais de vários alunos de uma turma
e mostre a maior média, a menor média e a média aritmética da turma. O
programa para quando encontrar uma média negativa.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float somaMedia = 0, mediaTurma = 0, mediaAlunos = 0, maiorMedia = 0, menorMedia = 0;
	int contador = 0;
	
	while(mediaAlunos >= 0)
	{
		contador++;
		
		printf("%i)Digite sua média final: ", contador);
		scanf("%f", &mediaAlunos);
		
		if(mediaAlunos < 0)
		{
			break;
		}
            
		if(mediaAlunos > 10)
		{
			printf("Média não pode ser maior do que 10\n");
		}
		else
		{
			if(mediaAlunos > maiorMedia)
			{
				maiorMedia = mediaAlunos;
			}
			
			if(menorMedia > mediaAlunos)
			{
				menorMedia = mediaAlunos;
			}
			
			somaMedia = somaMedia + mediaAlunos;
		}
	}
	
	if(contador > 0)
	{
		mediaTurma = somaMedia / contador;
	
		printf("Maior média = %.2f\nMenor média = %.2f\nMédia da turma = %.2f.", maiorMedia, menorMedia, mediaTurma );
		return 0;
	}
	else
	{
		printf("Nenhuma média foi digitada");
	}

}
