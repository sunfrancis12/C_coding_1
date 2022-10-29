#include<stdio.h>
int main(){
    long a=-1,b=0;

    while(a!=0){
        scanf("%ld",&a);
        b +=a;
    }

    printf("%ld",b);
}