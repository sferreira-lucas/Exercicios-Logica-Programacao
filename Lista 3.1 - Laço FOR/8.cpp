#include <stdio.h>

int main() {
    float altura, maiorAltura, menorAltura, somaAlturaMulheres = 0, somaAlturaTurma = 0;
    int codigoSexo, contadorMulheres = 0;

    // Inicialização das variáveis com valores iniciais
    maiorAltura = 0;
    menorAltura = 99999;

    for (int i = 1; i <= 3; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);

        printf("Digite o código de sexo (1 - Masculino, 2 - Feminino) da pessoa %d: ", i);
        scanf("%d", &codigoSexo);

        // Verifica se a altura é a maior ou a menor atual
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }

        // Verifica se é uma mulher e atualiza os dados para o cálculo da média de altura das mulheres
        if (codigoSexo == 2) {
            somaAlturaMulheres += altura;
            contadorMulheres++;
		}
	}
	
	return 0;
}

       

