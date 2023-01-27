#include <stdio.h>

int main() {
    int matriz[3][3], x;
    int i, j, encontrado = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Informe o valor a ser buscado: ");
    scanf("%d", &x);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                printf("Valor encontrado na posicao [%d][%d]\n", i+1, j+1);
                encontrado = 1;
                break;
            }
        }
    }
    if (!encontrado) {
        printf("Valor nao encontrado\n");
    }
    return 0;
}
