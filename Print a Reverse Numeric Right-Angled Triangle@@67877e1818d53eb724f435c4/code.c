#include <stdio.h>

int main() {
    int N;

    // Input the number of rows
    scanf("%d", &N);

    // Print the reverse numeric right-angled triangle
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
