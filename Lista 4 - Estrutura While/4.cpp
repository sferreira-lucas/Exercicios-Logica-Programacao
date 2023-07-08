#include <stdio.h>
#include <locale.h>

int main()
{
	
	/*
	Fa�a um programa que leia as m�dias finais de v�rios alunos de uma turma
e mostre a maior m�dia, a menor m�dia e a m�dia aritm�tica da turma. O
programa para quando encontrar uma m�dia negativa.
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float somaMedia = 0, mediaTurma = 0, mediaAlunos = 0, maiorMedia = 0, menorMedia = 0;
	int contador = 0;
	
	while(mediaAlunos >= 0)
	{
		contador++;
		
		printf("%i)Digite sua m�dia final: ", contador);
		scanf("%f", &mediaAlunos);
		
		if(mediaAlunos < 0)
		{
			break;
		}
            
		if(mediaAlunos > 10)
		{
			printf("M�dia n�o pode ser maior do que 10\n");
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
	
		printf("Maior m�dia = %.2f\nMenor m�dia = %.2f\nM�dia da turma = %.2f.", maiorMedia, menorMedia, mediaTurma );
		return 0;
	}
	else
	{
		printf("Nenhuma m�dia foi digitada");
	}

}
