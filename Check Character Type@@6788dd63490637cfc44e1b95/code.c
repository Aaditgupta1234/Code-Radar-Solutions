#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='i'||a=='e'||a=='u'||a=='o'){
        printf("Vowels");
    }else{
        printf("Consonant");
    }
    return 0;
}