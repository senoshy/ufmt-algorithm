#include <stdio.h>

float soma(float a, float b)
{
    return a + b;
}
float subtracao(float a, float b)
{
    return a - b;
}
float multiplicacao(float a, float b)
{
    return a * b;
}
float divisao(float a, float b)
{
    if (b == 0)
    {
        printf("ERR: divisao por 0 não é aceita.");
        return 0;
    }
    return a / b;
}

void exibe_resultado(float a, char op, float b, float res)
{
    printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
}

int main()
{
    float a, b, res = 0;
    char op;
    printf("Digite a expressão: ");
    if (scanf("%f %c %f", &a, &op, &b) != 3)
    {
        printf("Entrada inválida.\n");
        return 1;
    }

    switch (op)
    {
    case '+':
        res = soma(a, b);
        exibe_resultado(a, op, b, res);
        break;
    case '-':
        res = subtracao(a, b);
        exibe_resultado(a, op, b, res);
        break;
    case '*':
        res = multiplicacao(a, b);
        exibe_resultado(a, op, b, res);
        break;
    case '/':
        if (b == 0)
        {
            printf("ERR: divisão por 0 não é aceita.\n");
        }
        else
        {
            res = divisao(a, b);
            exibe_resultado(a, op, b, res);
        }
        break;
    default:
        printf("operador invalido. use +, -, * ou /.\n");
    }

    return 0;
}