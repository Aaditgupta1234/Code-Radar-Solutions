#include <stdio.h>

int main() {
    int N;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Print the right-angled triangle
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
