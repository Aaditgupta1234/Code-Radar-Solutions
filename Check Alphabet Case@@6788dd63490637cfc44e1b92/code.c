#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='A'){
        printf("Uppercase");
     }
    else if(a=="%s"){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");}
    return 0;
}