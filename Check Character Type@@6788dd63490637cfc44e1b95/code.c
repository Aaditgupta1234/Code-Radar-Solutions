#include <stdio.h>
int main() {
    char a;
    scanf("%s",&a);
    if(a=="a")||(a=="i")||(a=="o")||(a=="u")||(a=="e"){
        printf("Vowels");
    }else{
        printf("Consonant");
    }
    return 0;
}