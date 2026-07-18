#include <stdio.h>
#define H 4
#define W 5

void imprime_img(int img[][W], int h) {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < W; j++)
      printf("%4d", img[i][j]);
    printf("\n");
  }
}

void ajusta_brilho(int img[][W], int h, int delta) {
  for (int i = 0; i < h; i++)
    for (int j = 0; j < W; j++) {
      img[i][j] += delta;
      if (img[i][j] > 255)
        img[i][j] = 255;
      if (img[i][j] < 0)
        img[i][j] = 0;
    }
}

void espelha_horizontal(int img[][W], int h) {
  for (int i = 0; i < h; i++)
    for (int j = 0; j < W / 2; j++) {
      int tmp = img[i][j];
      img[i][j] = img[i][W - 1 - j];
      img[i][W - 1 - j] = tmp;
    }
}

void espelha_vertical(int img[][W], int h) {
  for (int i = 0; i < h / 2; i++)
    for (int j = 0; j < W; j++) {
      int tmp = img[i][j];
      img[i][j] = img[h - 1 - i][j];
      img[h - 1 - i][j] = tmp;
    }
}

int main() {
  int img[H][W] = {{10, 20, 30, 40, 50},
                   {60, 70, 80, 90, 100},
                   {110, 120, 130, 140, 150},
                   {160, 170, 180, 190, 200}};

  printf("Original:\n");
  imprime_img(img, H);

  ajusta_brilho(img, H, 50);
  printf("apos brilho +50:\n");
  imprime_img(img, H);

  espelha_horizontal(img, H);
  printf("apos espelho horizontal:\n");
  imprime_img(img, H);

  espelha_vertical(img, H);
  printf("apos espelho vertical:\n");
  imprime_img(img, H);

  return 0;
}
