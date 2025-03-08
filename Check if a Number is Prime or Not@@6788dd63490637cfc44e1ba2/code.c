#include <stdio.h>
int main() {
    int n, isPrime = 1;
    scanf("%d", &n);
    if (n == 1) {
        printf("Not Prime");
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
