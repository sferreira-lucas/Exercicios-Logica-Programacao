#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	13 - Faça um algoritmo para ler três notas e o número de faltas de um aluno e escrever 
qual a sua situação final: Aprovado, Reprovado por Falta ou Reprovado por Média. A 
média para aprovação é 7,0 e o limite de faltas é 25% do total de aulas. O número de aulas 
ministradas no semestre foi de 80. A reprovação por falta sobrepõe a reprovação por 
Média. 
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media, frequenciaAulas, aulas = 80;
	int faltas, count = 1, limiteFaltas = aulas * 0.25;
	
	printf("Digite a %iº nota: ", count++);
	scanf("%f", &nota1);

	printf("Digite a %iº nota: ", count++);
	scanf("%f", &nota2);
		
	printf("Digite a %iº nota: ", count++);
	scanf("%f", &nota3);
	
	printf("Quantidade de faltas: ");
	scanf("%i", &faltas);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	frequenciaAulas = (faltas / aulas) * 100;
	printf("\nMédia das notas: %.2f\n", media);
	
	printf("Frequência de faltas: %.2f%%\n", frequenciaAulas);
	
	if(frequenciaAulas > limiteFaltas)
	{
		printf("O limite de faltas é de 25%%!\n", frequenciaAulas);
		printf("Reprovado por falta.");
	}
	else if(media >= 7)
	{
		printf("Média = %.2f\n", media);
		printf("Aprovad0");
	}
	else
	{
		printf("Média = %.2f", media);
		printf("Reprovado por média");
	}
	
	return 0;
}
