#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x > 10)
        printf("A\n");
    else if (x > 3)
        printf("B\n");
    else    
        printf("C\n");
} // input x = 5 ;; output = "B"