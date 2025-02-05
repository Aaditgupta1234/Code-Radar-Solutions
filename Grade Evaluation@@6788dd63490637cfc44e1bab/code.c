#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    switch (a){
        case "A":
        printf("Excelent\n");
        break;
        // case"B":
        // printf("Good\n");
        // break;
        // case"C":
        // printf("Average");
        // case"D":
        // printf("Below Average");
        // break;
        // case"F":
        // printf("Fail");
        // break;
        default:
        printf("Invalid grade");
        break;
    }
    return 0;
}