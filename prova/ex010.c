#include <stdio.h>

int main() {
    int n[7];
    int i, TotPar = 0;

    for (i = 0; i < 7; i++) {
        printf("Digite o %do. valor: ", i+1);
        scanf("%d", &n[i]);
    }

    printf("\n");

    for (i = 0; i < 7; i++) {
        if (n[i] % 2 == 0) {
            TotPar++;
            printf("Valor %d na posicao %d e PAR!\n", n[i], i+1);
        }
    }

    return 0;
}
