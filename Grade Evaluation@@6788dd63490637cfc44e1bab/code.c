#include <stdio.h>
int main() {
    char a[100];
    scanf("%S",&a);
    switch (a){
        case 'A':
            printf("Excelent");
            break;
        // case 'B':
        //     printf("Good\n");
        //     break;
        // case 'C':
        //     printf("Average");
        //     break;
        // case 'D':
        //     printf("Below Average");
        //     break;
        // case 'f':
        //     printf("Fail");
        //     break;
        default:
            printf("Invalid grade");
            break;
    }
    return 0;
}