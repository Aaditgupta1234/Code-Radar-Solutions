#include <stdio.h>
int main() {
    int a;
    sacnf("%d",&a);
    if(a<=0){
        printf("Freezing");
    }else{
        printf("Above Freezing");}
    return 0;
}