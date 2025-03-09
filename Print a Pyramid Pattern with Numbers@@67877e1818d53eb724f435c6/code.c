#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int space, num;
    for (int i = 1; i <= N; ++i) {
        for (space = 1; space <= N - i; ++space) {
            printf("  ");
        }
        for (num = 1; num <= i; ++num) {
            printf("%d ", num);
        }
        for (num = i - 1; num > 0; --num) {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}


