#include <stdio.h>
int main() {
    int number, n;

    // Input the number and the bit position (0-based)
    scanf("%d %d", &number, &n);

    // Retrieve the value of the nth bit
    int bitValue = (number >> n) & 1;

    // Output the result
    printf("%d\n", n, bitValue);

    return 0;
}
