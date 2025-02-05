#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    switch (a){
        case 'R':
        printf("Stop");
        break;
        default:
        printf("Inavalid input");
        break;
    }
    return 0;
}