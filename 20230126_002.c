#include <stdio.h>

void somarMatrizes(int matrizA[3][5], int matrizB[3][5], int matrizC[3][5]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    int matrizA[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int matrizB[3][5] = {{16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};
    int matrizC[3][5];

    somarMatrizes(matrizA, matrizB, matrizC);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
