#include <stdio.h>
int main () {
    int v[] = {3, 1, 4, 1, 5};
    int n = 5;
    int a = v[0], b = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > a) {
            a = v[i];
            b = i;
        }
    }
    printf("a=%d b=%d\n", a, b);
}

/*
i = 1; v[i] = 1; v[1] < a; a = 3; b = 0
i = 2; v[i] = 4; v[2] > a; a = 4; b = 2
i = 3; v[i] = 1; v[3] < a; a = 4; b = 2
i = 4; v[i] = 5; v[4] > a; a = 5; b = 4
*/