#include <stdio.h>
#include <locale.h>

int main()
{
	/*
	13 - Fa�a um algoritmo para ler tr�s notas e o n�mero de faltas de um aluno e escrever 
qual a sua situa��o final: Aprovado, Reprovado por Falta ou Reprovado por M�dia. A 
m�dia para aprova��o � 7,0 e o limite de faltas � 25% do total de aulas. O n�mero de aulas 
ministradas no semestre foi de 80. A reprova��o por falta sobrep�e a reprova��o por 
M�dia. 
	*/
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media, frequenciaAulas;
	int aulas = 80, aulasComparecidas, count = 1;
	
	printf("Digite a %i� nota: ", count++);
	scanf("%f", &nota1);

	printf("Digite a %i� nota: ", count++);
	scanf("%f", &nota2);
		
	printf("Digite a %i� nota: ", count++);
	scanf("%f", &nota3);
	
	printf("Quantidade de aulas comparecidas: ");
	scanf("%i", &aulasComparecidas);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	frequenciaAulas = (aulasComparecidas / aulas); 
	
	printf("M�dia das notas: %.2f\n", media);
	
	printf("Frequ�ncia nas Aulas: %f", frequenciaAulas);
	
	return 0;
}
