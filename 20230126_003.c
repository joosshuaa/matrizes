#include <stdio.h>

void multiply_matrix_by_scalar(int matrix[3][3], int scalar) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

int main() {
    int matrix[3][3];
    int scalar;

    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Digite o valor escalar: ");
    scanf("%d", &scalar);

    multiply_matrix_by_scalar(matrix, scalar);

    printf("Resultado da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
