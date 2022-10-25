#include<stdio.h>
int main(){

    int i=0;
    int n=0;

    printf("Enter a nonnegative integer: ");
    scanf("%d",&n);

    do{
        n /= 10;
        i += 1;
    }while(n!=0);

    printf("The number has %d digit(s).",i);

    return 0;
}