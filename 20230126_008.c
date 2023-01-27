#include <stdio.h>
#include <stdbool.h>

bool multiplicaMatrizes(int matriz1[3][5], int matriz2[3][5], int matriz3[3][5], int linha1, int coluna1, int linha2, int coluna2) {
    if (coluna1 != linha2) {
        printf("Não é possível multiplicar as matrizes.\n");
        return false;
    }
    int i, j, k;
    for (i = 0; i < linha1; i++) {
        for (j = 0; j < coluna2; j++) {
            matriz3[i][j] = 0;
            for (k = 0; k < coluna1; k++) {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    return true;
}

int main() {
    int matriz1[3][5] = {{1, 2, 3}, {4, 5, 6}};
    int matriz2[3][5] = {{7, 8}, {9, 10}, {11, 12}};
    int matriz3[3][5];
    int linha1 = 2, coluna1 = 3, linha2 = 3, coluna2 = 2;
    if (multiplicaMatrizes(matriz1, matriz2, matriz3, linha1, coluna1, linha2, coluna2)) {
        int i, j;
        for (i = 0; i < linha1; i++) {
            for (j = 0; j < coluna2; j++) {
                printf("%d ", matriz3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
