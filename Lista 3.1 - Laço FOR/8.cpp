#include <stdio.h>

int main() {
    float altura, maiorAltura, menorAltura, somaAlturaMulheres = 0, somaAlturaTurma = 0;
    int codigoSexo, contadorMulheres = 0;

    // Inicializa��o das vari�veis com valores iniciais
    maiorAltura = 0;
    menorAltura = 99999;

    for (int i = 1; i <= 3; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);

        printf("Digite o c�digo de sexo (1 - Masculino, 2 - Feminino) da pessoa %d: ", i);
        scanf("%d", &codigoSexo);

        // Verifica se a altura � a maior ou a menor atual
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }

        // Verifica se � uma mulher e atualiza os dados para o c�lculo da m�dia de altura das mulheres
        if (codigoSexo == 2) {
            somaAlturaMulheres += altura;
            contadorMulheres++;
		}
	}
	
	return 0;
}

       

