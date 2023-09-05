#include <stdio.h>

// Função que retorna a soma dos divisores de um número inteiro qualquer; recebe um número inteiro
int soma_divisores(int numero) {
    int i = 1, soma = 0;
    // Laço de repetição que soma o divisor ao somatório total (laço: do número 2 até o antecessor do número informado) 
    while (i < numero) {
        if ((numero % i) == 0) {
            soma = soma + i;
        };
        i++;
    };
    return soma;
};

int main() {
    int numero_a, numero_b, soma_divisores_a, soma_divisores_b;
    scanf("%i %i", &numero_a, &numero_b);
    // Atribuição de varíavel das somas dos divisores para cada número inteiro inserido
    soma_divisores_a = soma_divisores(numero_a);
    soma_divisores_b = soma_divisores(numero_b);
    // Condição de ser número colega (|D(A) - B| <= 2 e |D(B) - A| <= 2)
    if ((soma_divisores_a - numero_b <= 2 &&  soma_divisores_a - numero_b >= -2) && (soma_divisores_b - numero_a <= 2 &&  soma_divisores_b - numero_a >= -2)) {
        printf("Incrível! Os dois números inserios são colegas!\n");
    } else {
        printf("Os números informados não são colegas.\n");
    };
    return 0;
};