#include <stdio.h>
int main() {
    char a;
    scanf("%s",&a);
    if(a=="%S"){
        printf("Uppercase");
    }else if(a=="%s"){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}