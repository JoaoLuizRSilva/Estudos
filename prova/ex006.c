#include <stdio.h>

int main() {
    int m[4][4];
    int l, c, sDP = 0, p2L = 1, mai3C = 0;

    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("Digite o valor da Posicao [%d,%d]: ", l+1, c+1);
            scanf("%d", &m[l][c]);
            if (l == c) {
                sDP += m[l][c];
            }
        }
    }

    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("%4d", m[l][c]);
        }
        printf("\n");
    }

    for (c = 0; c < 4; c++) {
        p2L *= m[1][c];
    }

    for (l = 0; l < 4; l++) {
        if (m[l][2] > mai3C) {
            mai3C = m[l][2];
        }
    }

    printf("A soma dos valores da Diagonal Principal e %d\n", sDP);
    printf("O produto dos valores da Segunda Linha e %d\n", p2L);
    printf("O maior valor da Terceira Coluna e %d\n", mai3C);

    return 0;
}
