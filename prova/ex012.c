#include <stdio.h>

// Procedimento para ordenar um vetor
void OrdenaVetor(int v[], int tam) {
    int i, j, aux;
    for (i = 0; i < tam-1; i++) {
        for (j = i+1; j < tam; j++) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main() {
    int v[10], c;

    for (c = 0; c < 10; c++) {
        printf("Digite o %do. valor: ", c+1);
        scanf("%d", &v[c]);
    }

    OrdenaVetor(v, 10);

    printf("-------------------------------\n");
    printf("Vetor Ordenado: \n");
    printf("-------------------------------\n");
    for (c = 0; c < 10; c++) {
        printf("%d ", v[c]);
    }

    return 0;
}
