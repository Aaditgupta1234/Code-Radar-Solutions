#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='i'||a=='e'||a=='u'){
        printf("Vowels");
    }else{
        printf("Consonant");
    }
    return 0;
}