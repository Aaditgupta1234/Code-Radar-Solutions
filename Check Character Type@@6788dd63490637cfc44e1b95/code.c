#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='i'||a=='o'||a=='u'||a=='e'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}