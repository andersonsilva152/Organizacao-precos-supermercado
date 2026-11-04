
#include <stdio.h>

int main() {
    // Vetor com os precos dos 10 produtos
    float precos[10] = {
        12.50, 4.20, 19.90, 7.80, 25.00,
        3.50, 15.75, 9.99, 6.30, 21.40
    };

    float auxiliar;
    int i, j;

    printf("=== SISTEMA DE PRECOS DO SUPERMERCADO ===\n");

    // Exibicao dos precos originais
    printf("\n=== PRECOS ORIGINAIS ===\n");

    for (i = 0; i < 10; i++) {
        printf("Preco %d: R$ %.2f\n", i + 1, precos[i]);
    }

    // Ordenacao crescente - Bubble Sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (precos[j] > precos[j + 1]) {
                auxiliar = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = auxiliar;
            }
        }
    }

    // Exibicao dos precos crescentes
    printf("\n=== ORDEM CRESCENTE ===\n");

    for (i = 0; i < 10; i++) {
        printf("Preco %d: R$ %.2f\n", i + 1, precos[i]);
    }

    // Ordenacao decrescente - Bubble Sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (precos[j] < precos[j + 1]) {
                auxiliar = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = auxiliar;
            }
        }
    }

    // Exibicao dos precos decrescentes
    printf("\n=== ORDEM DECRESCENTE ===\n");

    for (i = 0; i < 10; i++) {
        printf("Preco %d: R$ %.2f\n", i + 1, precos[i]);
    }

    printf("\nOrdenacao concluida com sucesso!\n");
    printf("Obrigado por utilizar o sistema!\n");

    return 0;
}