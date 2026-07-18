#include <stdio.h>
int main()
{
    int n = 3, cont = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + i; j <= n; j++)
        { /* bug aqui */
            printf("(%d, %d)\n", i, j);
            cont++;
        }
    }
    printf("Total: %d pares\n", cont);
    return 0;
}