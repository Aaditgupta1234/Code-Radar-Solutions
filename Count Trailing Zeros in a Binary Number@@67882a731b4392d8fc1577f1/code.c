#include <stdio.h>
int main() {
    unsigned int number;
    int count = 0;
    scanf("%u", &number);
    while ((number & 1) == 0 && number != 0) {
        count++;
        number >>= 1;
    }
    printf("%d\n", count);
    return 0;
}
