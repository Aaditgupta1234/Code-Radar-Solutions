#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            printf(" "); 
        }
        for (int num = 1; num <= i; ++num) {
            printf("%d ", num);
        }
        for (int num = i - 1; num > 1; --num) {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}




