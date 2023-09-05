// Undertale vibes!!!

#include <stdio.h>

// Função que APENAS retorna o level da lesma atual.
int retorna_level(int velocidade_lesma) {
	if (velocidade_lesma < 10 && velocidade_lesma > 0) {
		return 1;
	} else if (velocidade_lesma >= 10 && velocidade_lesma < 20) {
		return 2;
	} else if (velocidade_lesma >= 20) {
		return 3;
	}
};

int main() {
	int lesmas_total, velocidade_lesma = 0, maior_level = 0, i;
	scanf("%i", &lesmas_total);
	// Laço para inseção da velocidade das lesmas
	for (i = 0; i < lesmas_total; i++) {
		scanf("%i", &velocidade_lesma);
		// Condição: somente aumentará o level se for igual ou maior que o level atual. No primeiro laço, o maior level é 0.
		if (retorna_level(velocidade_lesma) >= maior_level) {
			maior_level = retorna_level(velocidade_lesma);
		};
	};
	// Poderia ser feito com switch-case, mas nesse caso o printf é mais sucinto.
	printf("Level %i", maior_level);
	return 0;	
};