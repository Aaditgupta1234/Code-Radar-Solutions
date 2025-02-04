#include <stdio.h>
int main() {
    char a;
    scanf("%S",&a);
    if((a=="a")||(a=="i")||(a=="o")||(a=="u")||(a=="e")){
        printf("Vowels");
    }else{
        printf("Consonant");
    }
    return 0;
}