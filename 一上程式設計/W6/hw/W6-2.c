#include<stdio.h>
int main(){
    int a=0,b=0,small=0,divisor=0;

    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    printf("\n");

    if(b<a) small = b;
    else small =a;

    for(int i=1;i<=small;i++){
        if(a%i==0 && b%i==0) divisor = i;
    }

    printf("Greatest common divisor: %d",divisor);
}