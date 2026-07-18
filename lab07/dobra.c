#include <stdio.h>

int dobra(int x)
{
    return 2 * x;
}
int main()
{
    int v = 7;
    v = dobra(v);
    printf("%d\n", v); /* deve imprimir 14 */
    return 0;
}