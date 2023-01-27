#include <stdio.h>

int main() {
    int matriz1[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int matriz2[3][5] = {{16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};
    int resultado[3][5];

    //Efetuando a soma das matrizes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    //Imprimindo o resultado
    printf("Resultado da soma:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
