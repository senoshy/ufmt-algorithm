#include <stdio.h>

#define MAX 50

typedef struct {
  char nome[100];
  int matricula;
  float media;
} Aluno;

void le_aluno(Aluno *a) {
  printf("Nome: ");
  scanf("%99s", a->nome);
  printf("Matricula: ");
  scanf("%d", &a->matricula);
  printf("Media: ");
  scanf("%f", &a->media);
}

void le_turma(Aluno turma[], int n) {
  for (int i = 0; i < n; i++) {
    le_aluno(&turma[i]);
  }
}

int indice_melhor(Aluno turma[], int n) {
  int idx = 0;
  for (int i = 1; i < n; i++) {
    if (turma[i].media > turma[idx].media) {
      idx = i;
    }
  }
  return idx;
}

void imprime_turma(Aluno turma[], int n) {
  printf("Lista de Alunos\n");
  for (int i = 0; i < n; i++) {
    printf("Nome: %s | Matrícula: %d | Média: %.1f\n", turma[i].nome,
           turma[i].matricula, turma[i].media);
  }
}

int main() {
  Aluno turma[MAX];
  int n;

  printf("Quantos alunos? ");
  scanf("%d", &n);

  le_turma(turma, n);
  imprime_turma(turma, n);

  int melhor_idx = indice_melhor(turma, n);
  printf("\nMelhor: %s (%.1f)\n", turma[melhor_idx].nome,
         turma[melhor_idx].media);

  return 0;
}
