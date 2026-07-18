#include <stdio.h>

int main() {
  int i = 0, s = 0, n;
  scanf("%d", &n);
  while (i < n) {
    s = s + i * i;
    i++;
  }
  printf("%d\n", s);
}

/*
i = 0
s = 0
n = 4

i = 0 portanto < 4

s = 0 + 0 * 0
i = 0 + 1

---

i = 1
s = 0
n = 4

i = 1 portanto < 4

s = 0 + 1 * 1
i = 1 + 1

---

i = 2
s = 1
n = 4

i = 2 portanto < 4

s = 1 + 2 * 2
i = 2 + 1

---

i = 3
s = 5
n = 4

i = 3 portanto < 4

s = 5 + 3 * 3
i = 3 + 1

---

i = 4
s = 2
n = 4

i = 4 == 4

output = 14
*/
