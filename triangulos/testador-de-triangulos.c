#include <stdio.h>
#include <stdbool.h>

double lado_01 = 0, lado_02 = 0, lado_03 = 0;

void informa_triangulo() {
	printf("Informe o valor dos lados do triângulo: ");
	scanf("%lf %lf %lf", &lado_01, &lado_02, &lado_03);
	printf("\nConcluído!\n\n");
};

bool verifica_validade() {
	if ((lado_01 + lado_02 > lado_03) && (lado_01 + lado_03 > lado_02) && (lado_02 + lado_03 > lado_01)) {
		return true;
	} else {
		return false;
	};
};

void testa_angulos() {
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

void testa_lados() {
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

	while (opcao != 6) {
		printf("\n1 - Informar novo triângulo\n2 - Testa se é um triângulo válido\n3 - Testar tipo de triângulo em função dos ângulos\n4 - Testar tipo do triângulo em função dos lados\n5 - Testa tudo\n6 - Encerra o programa\n\nDigite a opção: ");
		scanf("%i", &opcao);
		if (opcao == 6) {
			break;
		} else if (opcao == 1) {
			informa_triangulo();
		} else if (opcao == 2) {
			if (verifica_validade() == true) {
				printf("\nMuito bem! O triângulo é válido.\n\n");
			} else {
				printf("\nO triângulo não é válido. Tente informá-lo novamente.\n\n");
			};
		} else if (opcao == 3) {
			testa_angulos();
		} else if (opcao == 4) {
			testa_lados();
		} else if (opcao == 5) {
			testa_tudo();
		} else {
			printf("Opção inválida.");
		};
	};
};