#include <stdio.h>
int main() {
    int a,b,c;
    float d;
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b+c)/3;
    printf("Average: %.2f",d);
    if(d==0.00){
        printf("")
    };
    return 0;
}