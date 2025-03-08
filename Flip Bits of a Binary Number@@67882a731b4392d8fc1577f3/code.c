#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    int flipped = ~number;
    printf("%d\n", flipped);
    return 0;
}
