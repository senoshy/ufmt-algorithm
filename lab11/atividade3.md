# 1

## a) 
`i = 3` e `i = 4` a matriz só tem linhas e o laço vai ate NCOL=5

## b)
o bug passa despercebido porque os limites sao iguais

## c)
```c
void imprime_posicoes(int m[][NCOL], int nlin) {
    for (int i = 0; i < nlin; i++) {
        for (int j = 0; j < NCOL; j++)
            printf("m[%d][%d] = %d\n", i, j, m[i][j]);
    }
}
```

# 2

## a)
o programa printa um valor diferente pq o acesso é fora dos limites

## b)
quando `nlin == NCOL` (matriz quadrada), o laço itera certo

## ex
quando `nlin = 3` e `NCOL = 4`, o laço acessa `m[3][col]` que nao esta no limite

## c)
```c
for (int i = 0; i < nlin; i++)
```
