#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        if (n % 2 == 0)
            printf("positivo par\n");
        else
            printf("positivo impar\n");
    }
    else
    {
        if (n == 0)
            printf("zero\n");
        else
            printf("negativo\n");
    }
    return 0;
}