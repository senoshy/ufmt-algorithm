#include <stdio.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  char nome[100];
  int matricula;
  float media;
  Data nascimento;
} Aluno;

int idade(Data nasc, int ano_atual) {
  int dia_atual = 17;
  int mes_atual = 7;

  int anos = ano_atual - nasc.ano;

  if (mes_atual < nasc.mes || (mes_atual == nasc.mes && dia_atual < nasc.dia)) {
    anos--;
  }

  return anos;
}

void le_aluno_completo(Aluno *a) {
  printf("nome: ");
  scanf("%99s", a->nome);
  printf("matricula: ");
  scanf("%d", &a->matricula);
  printf("media: ");
  scanf("%f", &a->media);
  printf("data de nascimento (dd/mm/aa): ");
  scanf("%d %d %d", &a->nascimento.dia, &a->nascimento.mes, &a->nascimento.ano);
}

void imprime_aluno_completo(Aluno a, int ano_atual) {
  int idade_aluno = idade(a.nascimento, ano_atual);
  printf("\nNome: %s\n", a.nome);
  printf("Matricula: %d\n", a.matricula);
  printf("Media: %.1f\n", a.media);
  printf("Idade: %d anos\n", idade_aluno);
}

int main() {
  Aluno aluno1;

  le_aluno_completo(&aluno1);

  printf("teste 2025");
  imprime_aluno_completo(aluno1, 2025);

  return 0;
}
