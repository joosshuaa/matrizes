#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[100][100], n, i, j, soma_principal, soma_secundaria, soma_linha, soma_coluna, flag = 1;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    soma_principal = 0;
    for (i = 0; i < n; i++) {
        soma_principal += matriz[i][i];
    }
    for (i = 0; i < n; i++) {
        soma_linha = 0;
        soma_coluna = 0;
        for (j = 0; j < n; j++) {
            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];
        }
        if (soma_linha != soma_principal || soma_coluna != soma_principal) {
            flag = 0;
            break;
        }
    }
    soma_secundaria = 0;
    for (i = 0; i < n; i++) {
        soma_secundaria += matriz[i][n-1-i];
    }
    if (soma_secundaria != soma_principal) {
        flag = 0;
    }
    if (flag == 1) {
        printf("A matriz e um quadrado magico.\n");
    } else {
        printf("A matriz nao e um quadrado magico.\n");
    }
    return 0;
}
