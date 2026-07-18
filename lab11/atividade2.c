#include <stdio.h>
#define NLIN 3
#define NCOL 4

void imprime(int m[][NCOL], int nlin) {
    for (int i = 0; i < nlin; i++) {
        for (int j = 0; j < NCOL; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
}

int soma_total(int m[][NCOL], int nlin) {
    int s = 0;
    for (int i = 0; i < nlin; i++)
        for (int j = 0; j < NCOL; j++)
            s += m[i][j];
    return s;
}

void soma_por_linha(int m[][NCOL], int nlin, int vet[]) {
    for (int i = 0; i < nlin; i++) {
        vet[i] = 0;
        for (int j = 0; j < NCOL; j++)
            vet[i] += m[i][j];
    }
}

void soma_por_coluna(int m[][NCOL], int nlin, int vet[]) {
    for (int j = 0; j < NCOL; j++) {
        vet[j] = 0;
        for (int i = 0; i < nlin; i++)
            vet[j] += m[i][j];
    }
}

int soma_diagonal(int m[][NCOL], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += m[i][i];
    return s;
}

void transposta(int m[][NCOL], int nlin, int t[][NLIN]) {
    for (int i = 0; i < nlin; i++)
        for (int j = 0; j < NCOL; j++)
            t[j][i] = m[i][j];
}

int main() {
    int m[NLIN][NCOL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    printf("Matriz:\n");
    imprime(m, NLIN);

    printf("soma_total: %d\n", soma_total(m, NLIN));

    int vl[NLIN];
    soma_por_linha(m, NLIN, vl);
    printf("soma_por_linha: ");
    for (int i = 0; i < NLIN; i++) printf("%d ", vl[i]);
    printf("\n");

    int vc[NCOL];
    soma_por_coluna(m, NLIN, vc);
    printf("soma_por_coluna: ");
    for (int j = 0; j < NCOL; j++) printf("%d ", vc[j]);
    printf("\n");

    printf("soma_diagonal: %d\n", soma_diagonal(m, NLIN));

    int t[NCOL][NLIN];
    transposta(m, NLIN, t);
    printf("Transposta:\n");
    for (int i = 0; i < NCOL; i++) {
        for (int j = 0; j < NLIN; j++)
            printf("%4d", t[i][j]);
        printf("\n");
    }

    return 0;
}
