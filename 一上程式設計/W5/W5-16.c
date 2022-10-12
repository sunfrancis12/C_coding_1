#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        if(a*a == b*b + c*c) printf("%d",a);
        else printf("0");
    }

    else if(b>a && b>c){
        if(b*b == a*a + c*c) printf("%d",b);
        else printf("0");
    }

    else if(c>b && c>a){
        if(c*c == a*a + b*b) printf("%d",c);
        else printf("0");
    }

    else  printf("0");

    return 0;
}