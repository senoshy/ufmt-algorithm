#include <stdio.h>
float calc_imc(float peso, float altura)
{
    return peso / (altura * altura);
}

void calc(float imc)
{
    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc < 25.0)
        printf("Peso normal\n");
    else if (imc < 30.0)
        printf("Sobrepeso\n");
    else
        printf("Obesidade\n");
}

int main()
{
    float peso, altura, imc;
    printf("Pessoa 1 — peso e altura: ");
    scanf("%f %f", &peso, &altura);
    imc = calc_imc(peso, altura);
    calc(imc);
    printf("IMC: %.2f — ", imc);
    printf("Pessoa 2 — peso e altura: ");
    scanf("%f %f", &peso, &altura);
    imc = calc_imc(peso, altura);
    calc(imc);
    printf("Pessoa 3 — peso e altura: ");
    scanf("%f %f", &peso, &altura);
    imc = calc_imc(peso, altura);
    calc(imc);
    return 0;
}