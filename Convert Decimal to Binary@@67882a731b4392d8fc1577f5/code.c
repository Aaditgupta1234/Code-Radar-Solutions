#include <stdio.h>
int main() {
    unsigned int number;
    int i;
    scanf("%u", &number);
    for (i = 31; i >= 0; i--) {
        printf(".3%d", (number >> i) & 1);
    }
    return 0;
}
