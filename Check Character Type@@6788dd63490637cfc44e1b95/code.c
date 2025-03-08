#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='i'||a=='O'||a=='u'||a=='e'){
        printf("Vowel");
    }else if(a>=0||a<=0){
        printf("Digit");
    }
    else{
        printf("Consonant");
    }
    return 0;
}