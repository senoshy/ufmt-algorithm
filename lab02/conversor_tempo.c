#include <stdio.h>
int main () {
    unsigned int hora, mim, segundo;
    printf("valor em segundo: "); scanf("%u", &segundo);
    hora=segundo/3600;
    mim = segundo % 3600 / 60;
    segundo= segundo %60;
    printf("%uh %umin %us", hora, mim, segundo);
}