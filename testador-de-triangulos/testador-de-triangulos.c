#include <stdio.h>
#include <stdbool.h>

// Variáveis globais para os todos escopos das funções

double lado_01 = 0, lado_02 = 0, lado_03 = 0;

// Opção 1

void informa_triangulo() {
	printf("Informe o valor dos lados do triângulo: ");
	scanf("%lf %lf %lf", &lado_01, &lado_02, &lado_03);
	printf("\nConcluído!\n\n");
};

// Opção 2

bool verifica_validade() {
	// Verifica e retorna booleans para a impressão de mensagens
	if ((lado_01 + lado_02 > lado_03) && (lado_01 + lado_03 > lado_02) && (lado_02 + lado_03 > lado_01)) {
		return true;
	} else {
		return false;
	};
};

// Opção 3 - verificação: triângulo reto, obtusângulo ou acutângulo

void testa_angulos() {
	// Só irá rodar se o triângulo for válido
	if (verifica_validade() == true) {
		if ((lado_01 * lado_01) == (lado_02 * lado_02) + (lado_03 * lado_03)) {
			printf("\nTriângulo retângulo!\n\n");
		} else if ((lado_01 * lado_01) > (lado_02 * lado_02) + (lado_03 * lado_03)) {
			printf("\nTriângulo obtusângulo!\n\n");
		} else if ((lado_01 * lado_01) < (lado_02 * lado_02) + (lado_03 * lado_03)) {
			printf("\nTriângulo acutângulo!\n\n");
		};
	} else {
		printf("\nO triângulo não é válido. Tente informá-lo novamente.\n\n");
	};
};

// Opção 4 - verificação: triângulo equilátero, isóceles ou escaleno

void testa_lados() {
	// Só irá rodar se o triângulo for válido
	if (verifica_validade() == true) {
		if ((lado_01 == lado_02) && (lado_02 == lado_03)) {
			printf("\nTriângulo equilátero!\n\n");
		} else if ((lado_01 == lado_02) || (lado_02 == lado_03) || (lado_01 == lado_03)) {
			printf("\nTriângulo isóceles!\n\n");
		} else if ((lado_01 != lado_02) && (lado_02 != lado_03)) {
			printf("\nTriângulo escaleno!\n\n");
		};
	} else {
		printf("\nO triângulo não é válido. Tente informá-lo novamente.\n\n");
	};
};

// Opção 5

void testa_tudo() {
	printf("\nTeste de validade: \n");
	if (verifica_validade() == true) {
		printf("\nMuito bem! O triângulo é válido.\n\n");
	} else {
		printf("\nO triângulo não é válido. Tente informá-lo novamente.\n\n");
	};
	printf("\nTeste dos ângulos: \n");
	testa_angulos();
	printf("\nTeste dos lados: \n");
	testa_lados();
};

int main(void) {
	int opcao = 0;
	
	printf("\n--Testador de triângulos--\n\n");

	while (opcao != 6) {
		printf("1 - Informar novo triângulo\n");
		printf("2 - Testa se é um triângulo válido\n");
		printf("3 - Testar tipo de triângulo em função dos ângulos\n");
		printf("4 - Testar tipo do triângulo em função dos lados\n");
		printf("5 - Testa tudo\n");
		printf("6 - Encerra o programa\n\n");
		printf("Digite a opção: ");
		scanf("%i", &opcao);
		switch (opcao) {
			case 1: 
				informa_triangulo(); 
				break;
			case 2:
				if (verifica_validade() == true) {
					printf("\nMuito bem! O triângulo é válido.\n\n");
				} else {
					printf("\nO triângulo não é válido. Tente informá-lo novamente.\n\n");
				};
				break;
			case 3:
				testa_angulos();
				break;
			case 4:
				testa_lados();
				break;
			case 5:
				testa_tudo();
				break;
			case 6:
				break;
		};
	};
	return 0;
};
