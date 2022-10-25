#include<stdio.h>
int main(){

    int i=0;
    int n=0;

    printf("Enter a nonnegative integer: ");
    scanf("%d",&n);

    do{
        i += n%10;
        n = (n-n%10)/10;
    }while(n!=0);

    printf("%d",i);

    return 0;
}