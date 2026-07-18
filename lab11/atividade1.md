## a)

| m[i][j] | j=0 | j=1 | j=2 | j=3 |
|---------|-----|-----|-----|-----|
| i=0 | 1 | 2 | 3 | 4 |
| i=1 | 5 | 6 | 7 | 8 |
| i=2 | 9 | 10 | 11 | 12 |

## b)

```c
int soma = 0;
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        if (i == j)
            soma += m[i][j];
    }
}
printf("%d\n", soma);
```

somados: m[0][0] (1) + m[1][1] (6) + m[2][2] (11)
saida: 18

## c)

`m[j][i]` com `i == j` tem os mesmos acessos, mas quando **NCOL > NLIN**, `m[j][i]` com `j` indo ate NCOL causaria acesso fora dos limites

## d)

formula: `endereço = base + (i * NCOL + j) * sizeof(int)`

```
endereço = 1000 + (2 * 4 + 1) * 4
         = 1000 + 9 * 4
         = 1036
```
