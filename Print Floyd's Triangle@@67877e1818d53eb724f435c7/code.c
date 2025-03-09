#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            printf("  "); // Print spaces for alignment
        }
        for (int num = 1; num < i; ++num) {
            printf("%d ", num);
        }
        printf("%d\n", i);
    }

    return 0;
}
