#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a == 5)
        printf("cinco\n");
    else
        printf("nao e cinco\n");
} // input a = 0 ;; output = ""
  // correçao linha 7 if (a = 5) -> (a == 5)