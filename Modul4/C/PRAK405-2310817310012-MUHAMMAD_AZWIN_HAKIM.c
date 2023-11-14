#include <stdio.h>

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int m[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            m[i][j] = (i - j + 1) * k;
            printf("(%d * %d) ", i - j + 1, k);
        }

        printf("= ");

        int jpb = 0;
        for (int j = 0; j <= i; j++) {
            jpb += m[i][j];
        }

        printf("%d\n", jpb);
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            total += m[i][j];
        }
    }
    printf("%d\n", total);

    return 0;
}
