#include <stdio.h>
int main()
{
    int n = 60, cont = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cont++;
        }
    }
    printf("Pares: %d\n", cont);
    return 0;
}

/*
i = 1 j = 3 V cont = 2
i = 1 j = 4 V cont = 3
i = 1 j = 5 F cont = 3
i = 2 j = 3 V cont = 4
i = 2 j = 4 V cont = 5
i = 2 j = 5 F cont = 5
i = 3 j = 4 V cont = 6
i = 3 j = 5 F cont = 6
i = 4 j = 5 F cont = 6

--- quando n = 5

** cont = 2
** cont = 3
** cont = 4
** cont = 5
** cont = 6
** cont = 7
** cont = 8
** cont = 9
** cont = 10
n = 5 pares = 10
n = 60 pares = 1770
*/