#include<stdio.h>
int main(){

    int i=0;
    int n=0;

    printf("Enter integers (0 to terminate): ");

    do{
        scanf("%d",&n);
        i += n;
    }while(n!=0);

    printf("The sum is: %d",i);

    return 0;
}