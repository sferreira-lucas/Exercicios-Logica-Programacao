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
	
	float nota1, nota2, nota3, media, frequenciaAulas;
	int aulas = 80, aulasComparecidas, count = 1;
	
	printf("Digite a %iº nota: ", count++);
	scanf("%f", &nota1);

	printf("Digite a %iº nota: ", count++);
	scanf("%f", &nota2);
		
	printf("Digite a %iº nota: ", count++);
	scanf("%f", &nota3);
	
	printf("Quantidade de aulas comparecidas: ");
	scanf("%i", &aulasComparecidas);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	frequenciaAulas = (aulasComparecidas / aulas); 
	
	printf("Média das notas: %.2f\n", media);
	
	printf("Frequência nas Aulas: %f", frequenciaAulas);
	
	return 0;
}
