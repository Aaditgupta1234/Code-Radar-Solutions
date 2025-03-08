#include <stdio.h>
int main() {
    unsigned int number;
    int count = 0;
    scanf("%u", &number);
    for (int i = 31; i >= 0; i--) {
        if ((number >> i) & 1) {
            break;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}

