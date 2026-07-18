# 1

## a)

| Literal | Bytes armazenados | Buffer mínimo | `strlen` retorna |
|---------|-------------------|---------------|------------------|
| `"ola"` | `'o','l','a','\0'` | 4 | 3 |
| `"UFMT"` | `'U','F','M','T','\0'` | 5 | 4 |
| `"C99"` | `'C','9','9','\0'` | 4 | 3 |
| `""` | `'\0'` | 1 | 0 |
| `"a"` | `'a','\0'` | 2 | 1 |
| `"ab\ncd"` | `'a','b','\n','c','d','\0'` | 6 | 5 |

## b)

`strlen` retorna so a quantidade de caracteres antes do `\0`, o tamanho do buffer declara quantos bytes tem reservados

## c)

output esperado: `"UFMT"`
**O que acontece:** lixo de memoria depois de "UFMT" pq nao ha espaço para o `\0`, o `printf` continua lendo bytes até conseguir achar um zero na memoria

## d) Correção e regra geral

```c
char nome[5] = "UFMT"; 
```

a regra é que o buffer deve ter sempre 1 byte extra para `\0`
