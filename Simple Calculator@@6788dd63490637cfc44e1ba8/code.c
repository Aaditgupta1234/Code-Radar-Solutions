#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }else if(c=='-'){
        printf("%d",a-b);
    } else if(c=='/'){
      if(a>b){
        printf("%d",a/b);
      }else if(b>a){
        printf("Error");
      }
    }else if(c=='*'){
        printf("%d",a*b);
    }
    return 0;
}