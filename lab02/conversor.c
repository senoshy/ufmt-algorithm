#include <stdio.h>
int main () {
    double km, cm, metro, milha;
    printf("Valor a ser convertido: "); scanf("%lf",&km);
    milha= 0.621371*km;
    metro= 1000*km;
    cm= 100*metro;
    printf("%.3lf km equivale a:\n", km); 
    printf("  %.3lf metros\n", metro);
    printf("  %.3lf cm\n",cm);
    printf("  %.3lf milha\n", milha);
}