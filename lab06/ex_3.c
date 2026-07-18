#include <stdio.h>
int main()
{
    int n, T, cont = 0;
    scanf("%d %d", &n, &T);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j <= n; j++)
        {
            if (i + j == T)
            {
                printf("(%d, %d)\n", i, j);
                cont++;
            }
        }
    }
    printf("Total: %d par(es)\n", cont);
    return 0;
}