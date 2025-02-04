#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<a;i=i+1);
    if(a%i==0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}