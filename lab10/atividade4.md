# 1

## a

esperado: "iguais"
output: "diferentes" 

## b)
compara endereços, sao arrays diferentes, entao os endereços sao distintos

que pode ser confirmado com printf("%p %p", s1, s2);

## c)

```c
#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "ola";
    char s2[] = "ola";
    if (strcmp(s1, s2) == 0)
        printf("iguais\n");
    else
        printf("diferentes\n");
    return 0;
}
```

# 2

## a
espaço disponivel = 5, necessario = 10 (`algoritmo` = 9 chars + `\0`)

## b
podem ocorrer escritas fora dos limites do buffer ou corromper variaveis 

## c

```c
char destino[10];
```

`strlen Origem) + 1`.

## 3


erro 1 (linha 4): `s2[3]` buffer pequeno para "Ola" strings nao existem de fato na linguagem C, por isso precisam terminar em \0

erro 2 (linha 6): `s1[0] = 'o'` tentativa de modificar uma string literal

erro 3 (linha 7): `s1 == s2` compara apenas os endereços, é preciso usar `strcmp`

```c
#include <stdio.h>
#include <string.h>
int main() {
    char *s1 = "Ola";
    char s2[4];
    strcpy(s2, s1);
    s2[0] = 'o';
    if (strcmp(s1, s2) == 0)
        printf("iguais\n");
    else
        printf("diferentes\n");
    return 0;
}
```
