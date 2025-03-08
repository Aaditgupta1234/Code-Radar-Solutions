#include <stdio.h>

int main() {
    unsigned int number;
    int i;

    // Input the number
    printf("Enter a decimal number: ");
    scanf("%u", &number);

    // Output the binary representation
    printf("Binary representation: ");
    for (i = 31; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");

    return 0;
}

