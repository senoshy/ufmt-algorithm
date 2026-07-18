#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Lados a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    /* Verifica se forma um triangulo valido */
    if (a > (c + b) || b > (a + c) || c > (a + b))
    {
        printf("Nao forma triangulo\n");
    }
    else if (a == b && b == c)
    {
        printf("Equilatero\n");
    }
    else if ((a == b && b != c) || (a != b && b == c) || (a == c && c != b))
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Escaleno\n");
    }
    return 0;
}