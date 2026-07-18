#include <stdio.h>

float media(float soma, int n)
{
    return soma / n;
}

void imprime_linha(int largura)
{
    for (int i = 0; i < largura; i++)
        printf("-");
    printf("\n");
}

int maior(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int n = 0, l = 0, a = 0, b = 0;
    float x, soma = 0;
    printf("Digite numeros (0 para parar):\n");
    scanf("%f", &x);
    while (x != 0)
    {
        soma = soma + x;
        n++;
        scanf("%f", &x);
    }

    media(soma, n);
    printf("Media: %.2f\n", media(soma, n));
    printf("largura da linha a ser printada: ");
    scanf("%i", &l);
    imprime_linha(l);
    printf("digite dois valores a serem comparados: ");
    scanf("%i %i", &a, &b);
    maior(a, b);
    printf("Maior: %i", maior(a, b));
}
//  media, float, soma, parametros (soma, n), divisao de soma por n
// imprime_linha, void não tem retorno, largura, nao retorna valor por ser void, apenas da printf() quando chamada
// maior, int, a;b, se a for maior, retorna A, se b for maior, retorna B

// o void nao da retorno de um valor proprio, apenas roda um bloco de código.
// nao acontece nada, como i = 0, nao existe largura minima