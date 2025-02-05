#include <stdio.h>
int main() {
    char a;
    scanf("%C",&a);
    switch (a){
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Below Average");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }
    return 0;
}