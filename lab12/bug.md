# 1

## a)

error: assignment to expression with array type

## b)

pq p.codigo pode receber valores de forma direta
p.nome é um array, todo array eh como um ponteiro que aponta para o primeiro elemento dentro dele e "arroz" é uma string que tem outro endereço

# 2

## a)
bug2.c: In function ‘distancia_origem’:
bug2.c:6:44: error: ‘p’ is a pointer; did you mean to use ‘->’?
    6 | float distancia_origem(Ponto *p) { return p.x * p.x + p.y * p.y; /* bug */ }
      |                                            ^
      |                                            ->
bug2.c:6:50: error: ‘p’ is a pointer; did you mean to use ‘->’?
    6 | float distancia_origem(Ponto *p) { return p.x * p.x + p.y * p.y; /* bug */ }
      |                                                  ^
      |                                                  ->
bug2.c:6:56: error: ‘p’ is a pointer; did you mean to use ‘->’?
    6 | float distancia_origem(Ponto *p) { return p.x * p.x + p.y * p.y; /* bug */ }
      |                                                        ^
      |                                                        ->
bug2.c:6:62: error: ‘p’ is a pointer; did you mean to use ‘->’?
    6 | float distancia_origem(Ponto *p) { return p.x * p.x + p.y * p.y; /* bug */ }

## b)
