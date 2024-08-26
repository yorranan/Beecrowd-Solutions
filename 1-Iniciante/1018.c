#include <stdio.h>
#define SIZE 7

void calc(int cedulas, int N, int *c, int *m) {
    *c = N / cedulas;
    *m = N % cedulas;
}

int main() {
    int N;
    scanf("%d", &N);

    int cedulas[SIZE] = {100, 50, 20, 10, 5, 2, 1};
    int c, m;

    printf("%d\n", N);
    for (int i = 0; i < SIZE; i++) {
        calc(cedulas[i], N, &c, &N);
        printf("%d nota(s) de R$ %d,00\n", c, cedulas[i]);
    }

    return 0;
}
