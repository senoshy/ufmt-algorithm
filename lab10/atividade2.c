#include <stdio.h>
#include <string.h>

int meu_strlen(char s[]) {
  int i = 0;
  while (s[i] != '\0')
    i++;
  return i;
}

void meu_strcpy(char dest[], char src[]) {
  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
}

int meu_conta_vogais(char s[]) {
  int count = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    char c = s[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U')
      count++;
  }
  return count;
}

int main() {
  char s[50];
  printf("digite uma palavra: ");
  scanf("%49s", s);

  printf("strlen: %d\n", meu_strlen(s));
  printf("strlen(stdlib): %lu\n", strlen(s));

  printf("vogais: %d\n", meu_conta_vogais(s));

  char buf[50];
  meu_strcpy(buf, s);
  printf("strcpy: (buf, \"%s\"), buf = \"%s\"\n", s, buf);

  buf[0] = 'X';
  printf("buf[0] = \"%s\", src = \"%s\"\n", buf, s);

  return 0;
}
