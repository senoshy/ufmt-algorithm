#include <stdio.h>
int main()
{
    int n, x, menor;
    printf("Quantos numeros? ");
    scanf("%d", &n);
    printf("Numero 1: ");
    scanf("%d", &x);
    menor = x; 
    for (int i = 1; i < n; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &x);
        if (x < menor)
            menor = x;
    }
    printf("Menor: %d\n", menor);
    return 0;
}

// b) para qualquer sequencia que exista o numero 0
// c) nao existe leitura para x antes de entrar no loop
