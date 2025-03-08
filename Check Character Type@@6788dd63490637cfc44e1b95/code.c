#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        switch (a) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("Vowel\n");
                break;
            default:
                printf("Consonant\n");
                break;
        }
    }else if(a>="0"||a<="9"){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}