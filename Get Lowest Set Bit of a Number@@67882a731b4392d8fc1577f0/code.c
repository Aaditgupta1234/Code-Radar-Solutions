#include <stdio.h>
int main() {
    int number, position = 0;
    scanf("%d", &number);
    while ((number & 1) == 0 && position < 32) {
        position++;
        number >>= 1;
    }
    if (position < 32) {
        printf("%d\n", position);
    } else {
        printf("No set bit found.\n");
    }
    return 0;
}
