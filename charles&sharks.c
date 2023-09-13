#include <stdio.h>

int main() {
	int n, quantidade, tipo, vetor[13];
	const char *nomes[13];
	nomes[0] = "Branco";
	nomes[1] = "Martelo";
	nomes[2] = "Touro";
	nomes[3] = "Baleia";
	nomes[4] = "Lixa";
	nomes[5] = "Frade";
	nomes[6] = "Tigre";
	nomes[7] = "Cabeça-Chata";
	nomes[8] = "Serra";
	nomes[9] = "de Pontas Negras";
	nomes[10] = "Raposa";
	nomes[11] = "Mako";
	nomes[12] = "Bruxa";
	nomes[13] = "Azul";
	scanf("%i", &quantidade);
	for (n = 0; n < quantidade; n++) {
		scanf("%i", &tipo);
		vetor[tipo - 1] = vetor[tipo - 1] + 1;
	};
	for (n = 0; n < 14; n++) {
		if (vetor[n] > 0) {
			printf("Tubarão %s\n", nomes[n]);
		};
	};
	return 0;
};