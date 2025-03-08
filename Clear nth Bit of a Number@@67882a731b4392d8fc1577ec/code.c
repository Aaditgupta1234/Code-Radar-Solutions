#include <stdio.h>
int main() {
    int number, n, mask;
    scanf("%d %d", &number, &n);
    mask = ~(1 << n);
    number = number & mask;
    printf("%d\n", n, number);
    return 0;
}
