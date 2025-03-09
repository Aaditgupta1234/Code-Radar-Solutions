#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read input

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for numbers in a row
            printf("%d", j);
            if (j < i) {  
                printf(" ");
            }
        }
        printf("\n");  
    }
    return 0;
}



