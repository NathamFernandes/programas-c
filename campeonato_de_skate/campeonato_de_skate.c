#include <stdio.h>

// Função que determina o score do atleta no dia (recebe os scores do dia inseridos pelo usuário)
int determina_score_dia(int pontuacao_1, int pontuacao_2, int pontuacao_3) {
    // Primeiro testa se o score_x é menor que algum dos outros scores. Se sim, retorna score_x quando score_x é maior 
    // que pelo menos um dos outros scores. Se não, passa para a próxima condicional.
    if (pontuacao_1 < pontuacao_2 || pontuacao_1 < pontuacao_3) {
        if (pontuacao_1 > pontuacao_2 || pontuacao_1 > pontuacao_3) {
            return pontuacao_1;
        };
    };
    if (pontuacao_2 < pontuacao_1 || pontuacao_2 < pontuacao_3) {
        if (pontuacao_2 > pontuacao_1 || pontuacao_2 > pontuacao_3) {
            return pontuacao_2;
        };
    };
    if (pontuacao_3 < pontuacao_1 || pontuacao_3 < pontuacao_2) {
        if (pontuacao_3 > pontuacao_1 || pontuacao_3 > pontuacao_2) {
            return pontuacao_3;
        };
    };
    // Condicionais de scores iguais
    if (pontuacao_1 == pontuacao_2 || pontuacao_2 == pontuacao_3) {
        return pontuacao_2;
    } else if (pontuacao_1 == pontuacao_3) {
        return pontuacao_1;
    };
};

// Função que determina o score do atleta no campeonato (recebe os scores dos 3 dias completos)
int determina_score_final(int scores[3]) {
    // Mesma coisa que a função anterior, mas com arrays
    if (scores[0] < scores[1] || scores[0] < scores[2]) {
        if (scores[0] > scores[1] || scores[0] > scores[2]) {
            return scores[0];
        };
    };
    if (scores[1] < scores[0] || scores[1] < scores[2]) {
        if (scores[1] > scores[0] || scores[1] > scores[2]) {
            return scores[1];
        };
    };
    if (scores[2] < scores[0] || scores[2] < scores[1]) {
        if (scores[2] > scores[0] || scores[2] > scores[1]) {
            return scores[2];
        };
    };
    // Condicionais de scores iguais
    if (scores[0] == scores[1] || scores[1] == scores[2]) {
        return scores[1];
    } else if (scores[0] == scores[2]) {
        return scores[0];
    };
    
};

int main() {
    // Declarando variáveis: "sub_score_x_y" é o xº score do atleta y em um dos três dias; "scores_x[3]" é uma lista
    // que armazena os scores dos 3 dias do atleta x; "score_final_x é" o score final do atleta x no cameponato.  
    int sub_score_1_a, sub_score_2_a, sub_score_3_a, scores_a[3], score_final_a;
    int sub_score_1_b, sub_score_2_b, sub_score_3_b, scores_b[3], score_final_b;
    int i;
    // Laço de repetição: como são 18 inputs, existem 2 "fors", cada um para um atleta e cada um com 9 repetições no total
    // OBS.: O scanf possibilita a inserção dos 18 argumentos em uma só linha, sem a necessidade de inserir 3 por vez. Em
    // cada laço, ele lê os 3 argumentos inseridos e passa para os próximos 3 da linha.
    for (i = 0; i < 3; i++) {
        scanf("%i %i %i", &sub_score_1_a, &sub_score_2_a, &sub_score_3_a);
        // A lista armazena (a cada loop) o score na posição i do array. 
        scores_a[i] = determina_score_dia(sub_score_1_a, sub_score_2_a, sub_score_3_a);
    };
    for (i = 0; i < 3; i++) {
        scanf("%i %i %i", &sub_score_1_b, &sub_score_2_b, &sub_score_3_b);
        // A lista armazena (a cada loop) o score na posição i do array. 
        scores_b[i] = determina_score_dia(sub_score_1_b, sub_score_2_b, sub_score_3_b);
    };
    // Chama de função e atribuição de variáveis
    score_final_a = determina_score_final(scores_a);
    score_final_b = determina_score_final(scores_b);
    if (score_final_a > score_final_b) {
        printf("A\n");
    } else if (score_final_b > score_final_a) {
        printf("B\n");
    } else {
        printf("empate\n");
    };
    return 0;
};