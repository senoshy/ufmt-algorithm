#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2)
        printf("impar\n");
    if (n > 3)
        printf("maior que 3\n");
    if (n == 4)
        printf("exatamente 4\n");
} // input = 4 ;; output = maior que 3 && exatamente 4