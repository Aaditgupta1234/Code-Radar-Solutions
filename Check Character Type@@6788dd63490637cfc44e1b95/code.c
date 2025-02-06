#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='i'||a=='e'||a=='u'||a=='o'){
        printf("Vowel");
    }if else(a<=0){
        printf("Digit");
    }else{
        printf("Special character");
    }
    return 0;
}