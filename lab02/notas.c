#include <stdio.h>
int main() {
    float n1, n2, n3;
    float media;
    printf("Nota 1: "); scanf("%f", &n1);
    printf("Nota 2: "); scanf("%f", &n2);
    printf("Nota 3: "); scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("Media: %.2f\n", media);
    return 0;
}