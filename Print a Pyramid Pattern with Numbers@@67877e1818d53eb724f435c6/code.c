#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            printf("  "); // Print spaces for alignment
        }
        for (char ch = '1'; ch < '9' + i; ++ch) {
            printf("%d ", ch);
        }
        printf("\n");
    }

    return 0;
}



