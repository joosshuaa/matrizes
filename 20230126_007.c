#include <stdio.h>

int main() {
    int n = 4;
    int m = 3;
    int A[4][3] = {{4, 1, 2}, {5, 2, 1}, {2, 1, 3}, {7, 1, 2}};
    int itinerarios[3][4] = {{0, 3, 1, 3}, {3, 2, 1, 0}, {2, 1, 3, 2}};
    int custo_itinerario;
    int i, j, k;

    for (i = 0; i < 3; i++) {
        custo_itinerario = 0;
        for (j = 0; j < 4; j++) {
            custo_itinerario += A[itinerarios[i][j]][itinerarios[i][j+1]];
        }
        printf("Custo do itinerario %d: %d\n", i, custo_itinerario);
    }

    return 0;
}
