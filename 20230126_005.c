#include <stdio.h>

int main() {
    int matriz[5][5] = {{1, 2, 3, 4, 5},
                       {6, 7, 8, 9, 10},
                       {11, 12, 13, 14, 15},
                       {16, 17, 18, 19, 20},
                       {21, 22, 23, 24, 25}};

    printf("Diagonal principal: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    printf("Diagonal secundaria: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", matriz[i][4 - i]);
    }
    printf("\n");

    int somaLinha4 = 0;
    for (int i = 0; i < 5; i++) {
        somaLinha4 += matriz[3][i];
    }
    printf("Soma da linha 4: %d\n", somaLinha4);

    int soma_coluna2 = 0;
    for(int i = 0; i < 5; i++) {
        soma_coluna2 += matriz[i][2];
    }
    printf("Soma da coluna 2: %d\n", soma_coluna2);

    printf("Tudo, exceto a diagonal principal:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i != j) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

