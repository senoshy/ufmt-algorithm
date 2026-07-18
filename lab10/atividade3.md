# 3

## a

output: `Ola`
funcionando

## b
output: "fish: Job 1, './a.out' terminated by signal SIGSEGV (Address boundary error)"
sigsegv é um bloqueio de segurança que encerra o programa, a causa disso é a tentativa de alteraçao de uma regiao de memoria que é read-only
## Trecho C

output: `OLA`
pq nesse codigo nao tem nenhuma tentativa de alterar o conteudo de uma string, apenas fazendo o pointeiro apontar para outra parte de memoria

## tabela 

| Aspecto | `char buf[]` | `char *msg` |
|---------|-------------|-------------|
| conteudo modificavel? | sim | nao |
| ponteiro redirecionável? | nao | sim |
| onde os dados vivem? | stack | data (read-only) |
| quando usar? | texto mutavel | texto constante |

## b)

nao: 

```
projects/ufmt_algoritmos/lab10 via C v15.2.0-gcc 
❯ gcc -std=c99 3_b.c -Wall -o 3.out

projects/ufmt_algoritmos/lab10 via C v15.2.0-gcc 
❯ ./3.out
fish: Job 1, './3.out' terminated by signal SIGSEGV (Address boundary error)
```
