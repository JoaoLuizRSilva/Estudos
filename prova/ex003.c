#include <stdio.h>
#include <stdlib.h>

int main() {
    int valores[3][3];
    int l, c, totPar = 0;

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("Digite o valor da posicao [%d,%d]: ", l+1, c+1);
            scanf("%d", &valores[l][c]);
        }
    }

    printf("\nMATRIZ:\n-------------\n");
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            if (valores[l][c] % 2 == 0) {
                printf("{%2d}", valores[l][c]);
                totPar++;
            } else {
                printf("%4d", valores[l][c]);
            }
        }
        printf("\n");
    }

    printf("\nAo todo foram digitados %d valores PARES\n", totPar);
    return 0;
}
