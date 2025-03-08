#include <stdio.h>
int main() {
    int number, n;
    scanf("%d %d", &number, &n);
    int bitValue = (number >> n) & 1;
    printf("%d\n",bitValue);
    return 0;
}
